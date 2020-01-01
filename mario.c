#include <cs50.h>
#include <stdio.h>

int main(void)
{
// getting an integer between 1 and 8
      int height;
    do{
        height=get_int("Height: ");
        
    } 
// we stop when we the user inputs an integer between 1 and 8
    while(height > 8 || height < 1);
    
    for (int i=1;i<height+1 ; i++)
    {
        //printing height -i spaces
        for(int k =1; k<height-i+1; k++)
        {
            printf(" ");
        }
        
        for (int j = 1; j < i+1; j++)
        {
          //printing i #
          printf("#");
        }
        printf("\n");
    }
}
