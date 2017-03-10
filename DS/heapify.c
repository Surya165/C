#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,*b,temp,j,p;
	scanf ( "%d", &n );

	int a [ n ];
	
	b  = ( int* ) malloc ( n * sizeof ( int ) );
	
	for ( p = 0,i = 0; i < n; i ++ )
	{
		scanf ("%d", & a [ i ] );
		b [ i ] = a [ i ];

		p = ( i - 1 )/2;
		if (  i > 0 )
		{
			while ( b [ p ] < b [ i ] && p >= 0 )
			{
				temp = b [ i ];
				b [ i ]	 = b [ p ];
				b [ p ] = temp;
				i = p; 
				p = ( p - 1 ) / 2;
			}
		}
		for ( j = 0; j < i; j ++ )
		{
			printf ("%d ", b [ j ] );
		}
		printf ( "\n" );
	}
	


	
}
	 
	
