// malloc()
#include<stdlib.h>
#include<conio.h>
main()
{
	int n,i;
	int *ptr;
	printf("enter the number of integers to be taken:");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	printf("enter the numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("numbers:");
	for(i=0;i<n;i++)
	{
		printf("%d \t",*(ptr+i));
	}
	printf("\naddress:");	
	for(i=0;i<n;i++)
	{
		printf("%p \t",ptr+i);
	}
}


//--------------------------------------------//
//  Calloc()
#include<stdlib.h>
#include<conio.h>
main()
{
	int n,i;
	int *ptr;
	printf("enter the number of integers to be taken:");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
		printf("enter the numbers");
		for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("numbers:");
	for(i=0;i<n;i++)
	{
		printf("%d \t",*(ptr+i));
	}
	printf("\naddress:");	
	for(i=0;i<n;i++)
	{
		printf("%p \t",ptr+i);
	}	
}
