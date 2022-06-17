// NESTED LOOPS
#include <stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
	{
    	for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
    	
	}
}
// OUTPUT-
// *
// **
// ***
// ****
// *****
//------------------------------------------------------//
//2. 
#include <stdio.h>
void main()
{
    int i,j;
    for(i=5;i>0;i--)
	{
    	for(j=i;j>0;j--)
		{
			printf("*");
		}
		printf("\n");
    	
	}
}
// OUTPUT-
// *****
// ****
// ***
// **
// *
//------------------------------------------------------------//
//3.
#include <stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;++i)
	{
    	for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
    	
	}
}
// OUTPUT-
// 1
// 12
// 123
// 1234
// 12345
//--------------------------------------------------------------//
//4. 
#include <stdio.h>
void main()
{
    int i,j;
    for(i=5;i>=1;i--)
	{
    	for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
    	
	}
}
// OUTPUT-
// 12345
// 1234
// 123
// 12
// 1
//------------------------------------------------------------//
