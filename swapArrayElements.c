#include<stdio.h>
void main()
{
	int i,n,count,temp;
	scanf ( "%d", &n );
	int a[n];	
	for ( i = 0; i < n ; i ++ )
	{
		scanf ( "%d", a + i );
	}
	
	count = n / 2 - 1;
	
	for ( i = 0; i <= count ; i ++ )
	{
		temp = a [ i ];
		a [ i ] = a [ n - i - 1 ];
		a [ n - i - 1 ] = temp;
	}
	
	for ( i = 0; i < n; i ++ )
	{
		printf ( "%d ", a[i] );
	}
	printf ( "\n" );
}
