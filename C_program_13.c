#include<stdio.h>

int main()
{
    int a[100], i=0, count=0;

    printf("Enter numbers (0 to stop):\n");

    while(1)
    {
        scanf("%d",&a[i]);

        if(a[i] == 0)
        {
            break;
        }

        count++;
        i++;
    }

    if(count == 4 && a[0] == a[count-1])
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }

    return 0;
}
