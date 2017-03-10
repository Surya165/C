#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,search,temp,start,end,found,t,j,k;
	scanf("%d",&n);

	int a[n],b[n];
	for ( i = 0; i < n; i ++ )
	{
		b[i] = rand()%100;
		printf("%d ",b[i]);
	}
	printf("\n");


	printf("Enter the number of test cases: ");
	scanf("%d",&t);

	for(i = 0; i < t; i ++ )
	{
		printf("Enter the element to be searched\n");
		scanf("%d",&search);

		for ( j = 0; j < n ; j ++ )
			a[i] = b[i];
		
	
		for ( j = 0; j < n; j ++ )
		{
			for ( k = j + 1; k < n; k ++ )
			{
				if ( a[k] > a [ j ] )
				{
					temp = a[ j ];
					a[j] = a[k];
					a[k] = temp;
				}
			}
		}


		start = 0; 
		end = n - 1;
		found = 0;
		//		printf("Start = %d\t End = %d\t Temp = %d\n",start,end,temp);

		while ( start <= end )
		{
			temp = ( start + end ) / 2;
			if ( a[temp] == search )
			{
				found = 1;
				printf("Element found\n" );
				break;
			}
			else if ( a[temp] < search )
				end = temp - 1;
			else 
				start = temp + 1;
			printf("Start = %d\t End = %d\t Temp = %d\n",start,end,temp);
		}
		if ( !found)
		{
			printf("Element not found\n");
		}
	}
	return 0;
}

