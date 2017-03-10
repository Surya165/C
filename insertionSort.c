#include<stdio.h>
#include<stdlib.h>
void print(int a[], int n)
{
	int i;
	for( i = 0; i < n ; i ++ )
		printf("%d ",a[i]);
	printf("\n");
}
void createArrayWithRandomValues(int a[],int n)
{
	int i;
	for ( i = 0; i < n ; i ++ )
		a[i] =rand()%100;
}
void insertionSort(int a[], int n)
{
	int i,end = 0,temp,j;
	for ( end = 0;end < n - 1; end ++ )
	{
		for( i = 0; i <= end; i ++ )
		{
			if ( a[end + 1] < a[i] )
			{
				temp = a[end + 1];	
				for ( j = end + 1; j > i ;j -- )
				{
					a[j] = a[j - 1];
				}
				a [ i ] = temp;
				break;
			} 
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	createArrayWithRandomValues(a,n);
	print(a,n);
	insertionSort(a,n);
	print(a,n);
	return 0;
}
