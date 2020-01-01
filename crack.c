#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <crypt.h>
#define _XOPEN_SOURCE 
#include <unistd.h>
#include <assert.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void rand_str(char *dest, size_t length);

    
int main(int argc, string argv[]) //the argument is a hashed password
{
    if (argc != 2)
    {
        printf("error\n");
        return 1;
    }
    else
    {
        string key = argv[1];
        char c[3] = {key[0], key[1], '\0'};
        string st = c;
        int r = rand() % 6;
        char dest[r];
        rand_str(dest, r);
        while (crypt(dest, st) != key)
        {
            r = rand() % 6;
            rand_str(dest, r); 
        } 
        printf("%s", dest); //printing the cracked password
    }
    
}

void rand_str(char *dest, size_t length)
{
    char charset[] = "abcdefghijklmnopqrstuvwxyz"
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while (length-- > 0) 
    {
        size_t index = (double) rand() / RAND_MAX * (sizeof charset - 1);
        *dest++ = charset[index];
    }
    *dest = '\0';
}

