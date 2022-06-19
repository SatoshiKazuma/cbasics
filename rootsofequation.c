#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double a, b, c, root1, root2, Disc, realpart, imagpart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    Disc = pow(b, 2) - (4 * a * c);
    if (a == 0 && b == 0 && c == 0)
    {
        printf("Roots cannot be found,\nas equation has no variables.\n");
    }
    printf("Your discriminant is %.2lf\n", Disc);
    if (Disc > 0)
    {
        printf("The roots are real and distinct\n");
        root1 = (-b + sqrt(Disc)) / (2 * a);
        root2 = (-b - sqrt(Disc)) / (2 * a);
        printf("The Roots are %.2lf and %.2lf\n", root1, root2);
    }
    else if (Disc == 0)
    {
        printf("The roots are real and equal\n");
        root1 = root2 = -b / (2 * a);
        printf("The Roots are %.2lf and %.2lf\n", root1, root2);
    }
    else if (Disc < 0)
    {
        printf("The roots are imaginary\n");
        realpart = (-b) / (2 * a);
        imagpart = sqrt(-Disc) / (2 * a);
        printf("Root is %.2lf±%.2lfi\n",realpart,imagpart);
    }
}