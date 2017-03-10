#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void partition( int *a, int start, int end, int k )
{
	int i,j,pivotElement,temp,star,en;
	star = start;
	en = end;
	pivotElement = a[ start ++ ];
	while ( start <= end )
	{
		for ( i = start; i <= end; i ++ )
		{
			if ( a[ i ] > pivotElement )
			{
				start = i + 1;
				break;
			}
		}
		for ( j = end; j >= start; j -- )
		{
			if ( a [ i ] < pivotElement )
			{
				end = j - 1;
				break;
			}
		}
		temp =a [ i ];
		a[ i ] = a[ j ];
		a [ j ] = temp;
		
		for ( i = star; i <=end; i ++ )
		{
			if ( a [ i + 1 ] < a [ i ] )
			{
				temp = a [ i + 1 ];
				a [ i + 1 ] = a[ i ];
				a[ i ] = temp;
			}
			else 
			
				return i;

		} 
	}
	
}
void quickSort( int *a, int first, int last, int k  )
{
	int i,j, pivot;
	pivot = partition( a, first , last, k );
	quickSort ( a, first, pivot - 1, k );
	quickSort ( a, pivot + 1, last, k );
	 
} 
void hybridSort ( int *a, int first,int last; int k )
{
	clock_t begin,end;
	if ( last - start + 1 > k )
	{
		quickSort (a, first, last, k );
	}
}
void main()
{
	int *a,n,k;
	srand(unsigned int time (NULL));
	a = ( int * ) malloc ( n * sizeof ( int ) );
//	for ( k = 1; k <= n; i ++ )
//	{
		hybridSort (a, 0, n-1 , 0 );
}
