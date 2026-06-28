#include<stdio.h>

int main()
{
    int a[100], count=0, middle, average;

    printf("Enter numbers (0 to stop):\n");

    while(1)
    {
        scanf("%d",&a[count]);

        if(a[count]==0)
        {
            break;
        }

        count++;
    }

    if(count%2!=0)
    {
        middle=a[count/2];
        printf("Middle number=%d",middle);
    }
    else
    {
        average=(a[(count/2)-1]+a[count/2])/2;
        printf("Average=%d",average);
    }
}
