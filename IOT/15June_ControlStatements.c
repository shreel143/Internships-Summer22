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
//
output-
Enter the marks:
400
KINDLY ENTER VALUE BETWEEN 0 TO 100
  
//---------------------------------------------------------------//
//3. SWITCH STATEMENT
#include <stdio.h>
void main()
{
    int a, b, op;

    printf("WELCOME TO THE CALCULATOR :\n");

    printf("For Addition=1\nFor Subtraction=2\nFor Multiplication=3\nFor Division=4\n");
    printf("Enter the number for mathematical operation to be performed:\n");
    scanf("%d", &op);

    printf("Enter the 2 integers values :\n");
    scanf("%d %d", &a, &b);

    switch (op)
    {
    case 1:
        printf("Addition Result of %d and %d = %d", a, b, a + b);
        break;
        // BREAK: used to stop execution of all other if this condition is true
    case 2:
        printf("Subtraction Result of %d and %d = %d", a, b, a - b);
        break;
    case 3:
        printf("Multiplication Result of %d and %d = %d", a, b, a * b);
        break;
    case 4:
        printf("Division Result of %d and %d = %d", a, b, a / b);
        break;
    default:
        printf("KINDLY ENTER OPERATION VALUE BETWEEN 1 TO 4 ");
        break;
    }
}
// OUTPUT:
// WELCOME TO THE CALCULATOR :
// For Addition=1
// For Subtraction=2
// For Multiplication=3
// For Division=4
// Enter the number for mathematical operation to be performed:
// 3
// Enter the 2 integers values :
// 20
// 3
// Multiplication Result of 20 and 3 = 60

//--------------------------------------------------------------------------//
//4. USE of goto in switch 
#include <stdio.h>
void main()
{
    int a, b, operator,cont;

    printf("WELCOME TO THE CALCULATOR :\n");
x:
    printf("For Addition=1\nFor Subtraction=2\nFor Multiplication=3\nFor Division=4\n");
    printf("Enter the number for mathematical operation to be performed:\n");
    scanf("%d", &operator);

    printf("Enter the 2 integers values :\n");
    scanf("%d %d", &a, &b);

    switch (operator)
    {
    case 1:
        printf("Addition Result of %d and %d = %d", a, b, a + b);
        break;
        // BREAK: used to stop execution of all other if this condition is true
        
    case 2:
        printf("Subtraction Result of %d and %d = %d", a, b, a - b);
        break;
    case 3:
        printf("Multiplication Result of %d and %d = %d", a, b, a * b);
        break;
    case 4:
        printf("Division Result of %d and %d = %d", a, b, a / b);
        break;
    default:
        printf("KINDLY ENTER OPERATION VALUE BETWEEN 1 TO 4 ");
        break;
    }
    
    printf("\nDo you wish to Continue \nEnter 1 to Continue Otherwise enter 0:\n");
    scanf("%d", &cont);
	if(cont==1)
    {
    	goto x;
	}
	else
	{
	   goto y;
	}
	y:
	printf("Thankyou For Using !!\n");
}

OUTPUT-
// WELCOME TO THE CALCULATOR :
// For Addition=1
// For Subtraction=2
// For Multiplication=3
// For Division=4
// Enter the number for mathematical operation to be performed:
// 1
// Enter the 2 integers values :
// 20
// 30
// Addition Result of 20 and 30 = 50
// Do you wish to Continue
//  Enter 1 to Continue Otherwise enter 0:
// 1
// For Addition=1
// For Subtraction=2
// For Multiplication=3
// For Division=4
// Enter the number for mathematical operation to be performed:
// 3
// Enter the 2 integers values :
// 2
// 3
// Multiplication Result of 2 and 3 = 6
// Do you wish to Continue
// Enter 1 to Continue Otherwise enter 0:
// 0
// Thankyou For Using !!
