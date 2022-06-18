#include <stdio.h>
int main()
{
    float a, b, result;
    char oper, confirm;
    confirm = 'y';
    while (confirm == 'y')
    {
        printf("enter operation\n");
        scanf("%f%c%f", &a, &oper, &b);
        switch (oper)
        {
            case '+':
                result = a + b;
                printf("%d\n", (int)result);
                break;
            case '-':
                result = a - b;
                printf("%d\n", (int)result);
                break;
            case '*':
            case 'x':
                result = a * b;
                printf("%d\n", (int)result);
                break;
            case '/':
                result = a / b;
                printf("%f\n", result);
                break;
            default:
                printf("write something meaningfull for once...\n");
                break;
        }
    }
}