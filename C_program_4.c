#include <stdio.h>
int main()
{
	int biggest,i,a[5];
	printf("Enter 5 numbers:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	biggest=a[i];
	for(i=1;i<5;i++)
	{
		if(a[i]>biggest)
		{
			biggest=a[i];
		}
	}
	printf("Biggest number:%d",biggest);
}
