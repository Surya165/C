#include<stdio.h>
#include<stdlib.h>
void printDay ( int temp )
{
	switch ( temp )
	{
		case 0:
			printf ( "Saturday\n" );
			break;
		case 1:
			printf ("Sunday\n");
			break;
		case 2:
			printf ("Monday\n");
			break;
		case 3:
			printf ("Tuesday\n");
			break;
		case 4:
			printf ( "Wednesday\n" );
			break;
		case 5:
			printf ( "Thursday\n");
			break;
		case 6:
			printf ("Friday\n") ;
	}
}
void validateInput( int m, int d, int leapYear, int oddDaysInAMonth )
{
	if ( m > 12 )
		printf ( "Invalid Date: number of months cannot be greater than twelve\n" );
	else
	{
		if ( d > 31 )
		{
			printf ( "Invalid Date: number of days in a month cannot be greater than 31\n" );
		}
		else if ( d > 30 &&  oddDaysInAMonth == 2 )
		{
			printf ( "Invalid Date: maximum number of days in the given month are 30\n" );
		}
		else if ( d > 28 && m == 2 && !leapYear )
		{
			printf ( "Invalid Date: maximum number of days in the given month are 28\n" );
		}
		else if ( d > 29 && m == 2 && leapYear )
		{
			printf ( "Invalid Date: the number of days in the given month are 29\n" );
		}
		else
		{
		}
	}
}
int sumOfDigits ( char *string , int m )
{
	int i,sum,temp;
	for ( i = 0, sum = 0 ; i < m; i ++ )
	{
//		printf ( "Step %d:\t sum = %d\n", i, sum );
		sum += ( int ) string[i] - 48;
	}
//	printf ( "\n" );
//	printf ("count = %d\n", i );
	return sum;
	
}
void main()
{
	int n, l, m, d, temp;
	char *stringLeapYear, *stringYear;
	int leapYear;
	stringLeapYear = "313232332323";
	stringYear = "303232332323";
//	printf ( "%s", string ); 

	printf ( "Enter The date in the format ddmmyyyy without spaces :\n" );
	scanf ( "%d", &temp );
	


	d = temp / 1000000;
	m = (temp % 1000000) / 10000;
	n = ( temp % 10000 );
//	printf ( "%d %d %d\n", d , m , n );
//	validareInput ( m , d );	


	l = n / 4;
	
	leapYear = ( n % 4 );
	if ( leapYear )
	{
		leapYear = 0;
		temp = stringYear[m - 1] - 48;
	}
	else
	{ 
		temp = stringLeapYear[m-1] - 48;
		leapYear = 1;
	}

	printf ( "%d\n", temp );
//	validateInput ( m , d, leapYear );


//	printf ( "leap year = %d\n", leapYear );
	if ( leapYear )
	{
//		printf ("In the if block.\n");
		m = sumOfDigits ( stringLeapYear, m - 1 );
//		printf ("%d\n", m );
//		temp = 313232332323;
//		printf ( "%d\n", temp ); 
	}
	else 
	{
		m = sumOfDigits ( stringYear, m - 1 );
//		printf ( "m = %d",m );
	}
	
//	printf ( "%d %d\n", n , l );
	temp =  ( n + l - 1) % 7;
//	printf ( "%d\n", temp );
	n = temp;
	
	
	d = d%7;
//	printf ("%d\n", d );
	

	temp = ( n + m + d ) % 7;
//	printf ("n = %d\t m = %d\t  d = %d\t temp = %d\n", n, m, d, temp );
	
	printDay( temp );
}  
	
	
