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

//----------------------------------------------------------//

// 2. IF ELSE-IF ELSE 
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
else if (b>a)
{
	printf("%d is greater \n",b);
}
else 
{ printf("Both are equal ");
}
}
// OUTPUT (resolve the problem of equal values runtime error )
// Enter the integer values:
// 20
// 20
// Both are equal

void main()
{
int marks;

printf("Enter the marks:\n");
scanf("%d",&marks);

if(marks>=90 && marks<=100)
{
	printf("A GRADE");
}
else if (marks>=80 && marks<90)
{
	printf("B GRADE");
}
else if (marks>=70 && marks<80)
{
	printf("C GRADE");
}
else if (marks>=60 && marks<70)
{
	printf("D GRADE");
}
else if (marks>=0 && marks<50)
{
	printf("FAIL");
}
else // THIS IS FOR VALUES MORE THAN 100 OR LESS THAN 0
{ 
printf("KINDLY ENTER VALUE BETWEEN 0 TO 100");
}
}

// HERE WE HAVE USED ELSE INORDER TO AVOID RUNTIME ERROR (MARKS>100 && <0)
output-
Enter the marks:
400
KINDLY ENTER VALUE BETWEEN 0 TO 100
  
//---------------------------------------------------------------//

