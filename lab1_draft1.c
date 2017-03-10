#include<stdio.h>
void main ()
{
	int i, n,j, pivot, start ,end, temp;
		
	scanf ( "%d" , &n );
	int a[n];
//	scanf ( "%d", &k );
//	a = &k;
	for ( i = 0; i < n ; i ++ )
	{	
	//		printf("\n\ni before loop = %d\n", i );
		scanf ( "%d", &a[ i ] );
	//	scanf ( "%d" , &k );
	//	printf ( "from loop\t i = %d\n", i );
		
	}
	for ( i = 0 ; i < n; i ++ )
	{
		printf ( "%d ", a [ i ] );  
	}
	printf ( "\n" );
	printf ( "Partitioning.........\n" );
	pivot = a [ 0 ];
	start = 1;
	end = n-1;
	int step = 0;
	while ( start <= end ) 
	{
		for ( i = start; i <= end ; i ++ )
		{
			if ( a [ i ] > pivot )
			{
				start = i + 1;	
				break;
			}
		}
	
		for ( j  = end; j >= start ; j -- )
		{
			if ( a [ j ] < pivot )
			{
				end = j - 1;
				break;
			}
		}
		
		printf ( "%d %d\n%d %d\n", a [ i ], a [ j ],i , j  );
		temp = a [ i ];
		a [ i ] = a [ j ];
		a [ j ] = temp ;
		printf ( "Step %d: ", ++step );
		for ( i = 1 ; i < n ; i ++ )
		{
			printf ( "%d ",a[i] );
		}
		printf ( "\n" );
	}
	for ( i = 0; i < n; i ++ )
	{
		if ( a[ i + 1 ] < a [ i ] )
		{
			temp = a[ i ];
			a [ i ] = a [ i + 1];
			a [ i + 1 ] = temp;
		}
		else break;
	}
	for ( i = 0; i < n; i ++ )
		printf ( "%d ", a [ i ] );
	printf ( "\n" );
	
}
		

