#include<stdio.h>

int main()
{
    int a[100], b[100];
    int i=0, count=0;
    int n, digit, sum;
    int j, temp;

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

    for(i=0;i<count;i++)
    {
        n=a[i];
        sum=0;

        while(n>0)
        {
            digit=n%10;
            sum=sum+digit;
            n=n/10;
        }

        b[i]=sum;
    }

    for(i=0;i<count-1;i++)
    {
        for(j=i+1;j<count;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }

    printf("New array in ascending order:\n");

    for(i=0;i<count;i++)
    {
        printf("%d ",b[i]);
    }
}
