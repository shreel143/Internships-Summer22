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
