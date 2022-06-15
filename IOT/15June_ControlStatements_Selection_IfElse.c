// 1. IF ELSE  
#include<stdio.h>
void main()
{
int a;
int b;

printf("Enter the integer values:\n");
scanf("%d%d",&a,&b);

if(a>b)
{
	printf("%d is greater \n",a);
}
else
{
	printf("%d is greater \n",b);
}
}

// OUTPUT-
// 1. 
// Enter the integer values:
// 20
// 30
// 30 is greater 

// 2.  RUNTIME ERROR AS BOTH VLUES ARE EQUAL 
// Enter the integer values:
// 20
// 20
// 20 is greater
