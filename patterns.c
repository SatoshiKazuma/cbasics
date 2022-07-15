#include <stdio.h>
void main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if ((((j - 4) * (j - 2)) <= 0) && (((i - 4) * (i - 2)) <= 0))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
            
        }
        printf("\n");
    }
}