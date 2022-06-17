// 1. FOR LOOP
#include <stdio.h>
void main()
{
    int num,i;
    printf("Enter the number for which you want to print table of:\n");
    scanf("%d",&num);
    
    printf("TABLE OF %d :\n",num);
    for(i=1;i<=10;i++)
    {
    	printf("%d x %d = %d\n",num,i,num*i);
	}
}
// OUTPUT-
// Enter the number for which you want to print table of:
// 18
// TABLE OF 18 :
// 18 x 1 = 18
// 18 x 2 = 36
// 18 x 3 = 54
// 18 x 4 = 72
// 18 x 5 = 90
// 18 x 6 = 108
// 18 x 7 = 126
// 18 x 8 = 144
// 18 x 9 = 162
// 18 x 10 = 180
//----------------------------------------------------------------------------------//
//2. WHILE LOOP 
#include <stdio.h>
void main()
{
    int num,i;
    printf("Enter the number for which you want to print table of:\n");
    scanf("%d",&num);
    
    printf("TABLE OF %d :\n",num);
    
    i=1;
    while(i<=10)
    {
    	printf("%d x %d = %d\n",num,i,num*i);
    	i=i+1;
	}
}
// OUTPUT-
// Enter the number for which you want to print table of:
// 18
// TABLE OF 18 :
// 18 x 1 = 18
// 18 x 2 = 36
// 18 x 3 = 54
// 18 x 4 = 72
// 18 x 5 = 90
// 18 x 6 = 108
// 18 x 7 = 126
// 18 x 8 = 144
// 18 x 9 = 162
// 18 x 10 = 180
//--------------------------------------------------//

//3. CHAR UPDATION BY USER THROUGH WHILE LOOP
//3. CHAR UPDATION BY USER THROUGH WHILE LOOP
#include <stdio.h>
void main()
{
    char per;
    per = 'y';
    while (per == 'y') // to compare char use "==" and char value in single ' ' 
    {
        printf("\tSUCCESS!! ");
        printf("\nDo you wish  to continue \n Enter y or n :");
        scanf("%c", &per);
    }
}
//OUTPUT-
//         SUCCESS!!
// Do you wish  to continue
//  Enter y or n :y
//         SUCCESS!!
// Do you wish  to continue
//  Enter y or n :

