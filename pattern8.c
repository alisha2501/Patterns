//pattern 8//
#include<stdio.h>
int main()
{
	int c=1,i,j,k,a;
	for(i=1;i<=4;i++)
		{
			for(j=4;j>=i;j--)
			{
				printf(" ");
			}
			for(k=1;k<=i;k++)
			{
				printf("%d",c++);
			}
			c--;
			for(a=1;a<i;a++)
			{
				printf("%d",--c);
			}
			printf("\n");
			c=1;
		}
	return 0;
}
