#include<stdio.h>

#include<stdlib.h>
void print(int a[], int n)
{
        int i;
        for( i = 0; i < n ; i ++ )
                printf("%d ",a[i]);
        printf("\n");
}
void createArrayWithRandomValues(int a[],int n)
{
        int i;
        for ( i = 0; i < n ; i ++ )
                a[i] =rand()%100;
}
void mergeSortRecursive(int a[], int start, int end)
{
	int i,b[end -start + 1],right,left,temp,count;
	temp = (start + end)/2;
	for ( i = start; i <= end  ; i ++ )
	{
		b[i - start ] = a[ i ];
	}
	printf("\t");
	print(b,end-start +1);
	if(start <= end )
	{
		mergeSortRecursive(b,0,(end-start+1)/2);
		mergeSortRecursive(b,(end-start+1)/2+1, end);	
	}
	
	
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	createArrayWithRandomValues(a,n);
	print(a,n);
	mergeSortRecursive(a,0,n - 1);
	print(a,n);
	return 0;
}
