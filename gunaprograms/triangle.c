#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for (int i=0; i<n-1; i++)
	{
		for (int j=n-i; j>0; j--)
		{
			printf("  ");
		}
		for (int j=0 ; j<2*i+1; j++)
		{
			printf("%d ",9-j);
		}
		printf("\n");
	}
	for (int i=n-1; i>=0; i--)
	{
		for (int j=n-i; j>0; j--)
		{
			printf("  ");
		}
		for (int j=0 ; j<2*i+1; j++)
		{
			printf("%d ",9-j);
		}
		printf("\n");	
	}
    return 0;
}
