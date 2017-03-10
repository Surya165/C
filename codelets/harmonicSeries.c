#include<stdio.h>
void main(int argc, char *argv)
{
	float i,sum;
	for ( sum = 0,i = 1; i <= argv[1] ; i ++ )
	{
		sum = sum + ( 1.0 / i );
	}
	printf ( "%f\n", sum);
}
