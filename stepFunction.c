#include<stdio.h>
void main()
{
	float x;
	int y;
	printf ( "Enter any decimal number:\n" );
	scanf ( "%f", &x );
	y =( int ) ( x * 1000000 );
	y = y / 1000000;
	printf ( "The step value of the decimal number is:\t%d\n", y );
}
