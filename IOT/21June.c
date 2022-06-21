#include <stdio.h>
void main()
{
	// creation of array 
	int a[5],i;
	//1. individual initialise 
	a[0]=10;
	a[1]=11;
	a[2]=12;
	a[3]=7;
	a[4]=6;
	//1. individual initialise
	for (i=0;i<=5;i++){
		printf("\nEnter element no. %d:",i);
		scanf("%d",&a[i]);
	}
	for (i=0;i<=5;i++){
		printf("\n%dth Element of array is :",i,a[i]);
	}
}
//	a[0]=10;
//	a[1]=9;
//	a[2]=8;
//	a[4]=7;
//	a[5]=6;
//	
//	//TO PRINT
//	for(i=0;i<=5;i++)
//	{
//		printf("%d\n",a[i]);
//	}
//}
//// TO INITIALISE 
int a[5]={1,2,3,4,5,6}
int i;
for(i=0;i<=5;i++)
	{
		printf("%d\n",a[i]);
	}
single value access
printf("%d",a[2]);

while(i<=)
