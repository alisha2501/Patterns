//* right angled pyramid//
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter no. of rows:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("*");
		for(j=1;j<=i;j++)
		{
			printf("* *");
		}
	printf("\n");
	}
}
