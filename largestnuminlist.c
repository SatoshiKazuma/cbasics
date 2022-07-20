#include<stdio.h>
void main(){
    int i,n,max,a[10];
    printf("Enter the number of elements in the list: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<n;i++)
        if(a[i]>max)
            max=a[i];
    printf("The largest number in the list is: %d",max);
}