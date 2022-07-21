#include <stdio.h>
void main()
{
    int n, l, h, mid, res, loc;
    printf("Enter the n of the array: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    l = 0;
    h = (n - 1);

    printf("Enter the value to be searched: ");
    scanf("%d", &res);
    loc = -1;
    while (l <= h)
    {
        mid = (l + (h - l) / 2);
        if (array[mid] == res)
        {
            loc = mid;
            break;
        }
        else if (array[mid] < res)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    (loc == -1) ? (printf("Not found")) : (printf("%d was found at position %d", res, loc + 1));
}