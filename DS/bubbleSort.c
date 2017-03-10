#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,temp,j;
	scanf("%d",&n);

	int a[n];	
	for ( i = 0; i < n; i ++ )
	{
		a[i] = rand()%100;
		printf("%d ",a[i]);
	}
	printf("\n");

	int end = n;
	for( j = 0; j < n; j ++ )
	{
		for ( i = 0; i < end - 1; i ++ )
		{
			if(a[i+1] < a[i] )
			{
				temp = a[i];
				a[i]=a[i+1];
				a[i+1] = temp;
			}
		}
		end --;
	}

	for( i = 0 ; i < n; i ++ )
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
