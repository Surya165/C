#include<stdio.h>
struct activities
{
	int numberOfActivities;
	char ch[][100];
};
void main(int argc, char *arg)
{
	struct activities *list, garbage;
	list = &garbage;
	FILE *fp;
	char ch;	
	int i,n;
	i = 0;



	//read the file and inititalise acitivity list
	fp = fopen ( "Activities.list","a" );
	while ( fscanf ( fp, "%[^\n]", list -> ch[i]   ) != EOF );
	{
		i ++;
	}
	list -> numberOfActivities = i;
	
	list -> ch[ n +	1 ] = arg;
	
	list -> numberOfActivities = i +1;
	
}	
	

