#include <stdio.h>
int main()
{
	int a[5],i,sum=0,average=0;
	printf("Enter 5 numbers:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	average=sum/5;
	printf("Average of 5 numbers:%d",average);
}
