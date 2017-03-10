#include<stdio.h>
print ( int a[], int n )
{
	int i;
	
	for ( i = 0; i <= n  ; i ++ )
	{
		printf ( "%d ", a [ i ] );
	}
	printf ( "\n" );
}
void main()
{
	int i,n,j,p,temp;

	scanf ("%d", &n );
		
	int a [ n ];	

	for ( p = 0,i = 0; i < n ; i ++ )
	{
		scanf ( "%d", &a[ i ] );
		printf ( "Step %d", i );
		print( a, i );
		if ( i > 0 )
		{







				i = p;
				p = ( p - 1 ) / 2;
			}
		
		
		}
	}
}
