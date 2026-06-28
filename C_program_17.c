#include<stdio.h>

int main()
{
    int a[5], i;

    printf("Enter 5 numbers:\n");

    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=4; i>0; i--)
    {
        if(a[i] >= 10)
        {
            a[i-1] = a[i-1] + (a[i] / 10);
            a[i] = a[i] % 10;
        }
    }

    printf("After carry adjustment:\n");

    for(i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }
}
