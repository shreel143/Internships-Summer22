//-------Switch with goto -----------------------------//
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
