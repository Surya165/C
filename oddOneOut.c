#include<stdio.h>
void main ()
{
	int a [ 9 ],i,j,start,end,temp;
	for ( i  = 8; i >= 5; i -- )
	{
		a [ i ] = 9 - i;
	}
	for ( i = 1; i < 5; i ++ )
	{
		a [ i ] = 10 - i;
	}
	a [ 0 ] = 5;	
	for ( i = 0 ; i < 9 ; i ++ ) 
		printf ( "%d ", a[ i ] );
	printf ( "\n" );
	start = 1; 
	end = 8;
	while ( start <= end ){
	for ( i = start; i <= end; i ++ )
	{
		if ( a [ i ] > a [ 0 ] )
		{
			printf ( "%d ", a [ i ] );
			start = i + 1;
			break;
		}
	}
	for ( j = end; j > start; j -- )
	{
		if ( a [ j ] < a [  0 ] )
		{
			printf ( "%d ", a [ j ] );
			end = j - 1;
			break;
		}
	}
	printf ( "\nstart = %d\t end = %d\nUpdated Array :\n", start,end );
	temp = a [ i ];
	a[ i ] =  a [ j ];
	a[ j ] = temp;
	
	for ( i = 0; i < 9; i ++ )
		printf ( "%d ", a [ i ] );
	printf ( "\n" );
	}
	  
}

