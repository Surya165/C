#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,n,p,*b,temp,count;
	scanf ( "%d", &n );
	
	int a [ n ];
	
	for ( i = 0; i < n ; i ++ )
	{
//		scanf ( "%d", a + i );
		a [ i ] = rand()%100;
	}
	
	for ( i = 0; i < n; i ++ )
	{
		printf ( "%d ", *( a + i ) );
	}
	printf ("\n");
	
	b =( int * ) malloc ( n * sizeof ( int ) );
	b[0] = a [ 0 ];	

	for ( i = 1; i < n;i ++ )
	{
		b [ i ] = a [ i ];
		p = ( i - 1 ) / 2;
		printf ( "parent of %d is %d\n",a[ i ] ,  a [ p ] );
		j = i;
		while ( b [ j ] > b[ p ]  && p >= 0 ) 
		{
			temp = b [ j ];
			b[ j ] = b [ p ];
			b [ p ] = temp;
			j = p;
			p = ( p - 1 ) / 2;
		}		
	}

	i = 0; count = 1;
	while ( i < n )
	{
		for ( j = i; j < i + count && j < n ; j ++ )
		{
			printf ( "%d ", b [ j ] );
		}
		printf ( "\n" );
		i = i + count;
		count = count * 2;
	}
	
//	for ( i = 0 ; i < n ; i ++ )
//	{
//		printf ( "%d ", b [ i ] );
//	}
//	printf ( "\n" );

}
	
	
