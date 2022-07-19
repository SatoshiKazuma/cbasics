#include <stdio.h>
#include <stdlib.h>
// SQUARE WITH GAPS
//  void main()
//  {
//      for (int i = 1; i <= 5; i++)
//      {
//          for (int j = 1; j <= 5; j++)
//          {
//              if ((((j - 4) * (j - 2)) <= 0) && (((i - 4) * (i - 2)) <= 0))
//              {
//                  printf("  ");
//              }
//              else
//              {
//                  printf("* ");
//              }
//          }
//          printf("\n");
//      }
//  }

// LEFT HALF PYRAMID
//  void main()
//  {
//      for (int i = 0; i <= 5; i++)
//      {
//          for (int j = 0; j <= 5; j++)
//          {
//              if (j > 5 - i){
//                  printf("* ");
//              }
//              else
//              {
//                  printf("  ");
//              }
//          }
//          printf("\n");
//      }
//  }

// RIGHT HALF PYRAMID
//  void main(){
//      for (int i = 1; i <= 5; i++)
//      {
//          for (int j = 1; j <= i; j++)
//          {
//              printf("* ");
//          }
//          printf("\n");
//      }
//  }
// THE BLACK WIDOW SYMBOL
// int main()
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         for (int j = 1; j <= 10; j++)
//         {
//             if ((j == 1) || (j == 10) || (j == i) || (j == (11 - i)))
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
// }

// FULL PYRAMID
// void main(){
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= (5-i); j++)
//         {
//             printf("  ");
//         }
//         for (int k = 0; k <= 8; k++)
//         {
//             if (k < (i+(i-1)))
//             {
//                 printf("* ");
//             }
//         }
//         printf("\n");
//     }
// }
void main()
{
    for (int i = -4; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if ((abs(i) >= j))
            {
                printf("  ");
            }
        }
        for (int k = 0; k <= 8; k++)
        {
            if (k > (abs(i)+(abs(i)-1)))
            {
                printf("* ");
            }
        }
        
        printf("\n");
    }
}