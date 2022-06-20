#include <stdio.h>
int fact(int x);
void main()
{
int a,b;
printf("Enter value for factorial:");
scanf("%d",&a);
b=fact(a);
printf("%d",b);
	}
	
int fact(int x){
	
	if(x>1)
	{
		return x*fact(x-1);
	}
  else if(x==1) // we have added this extra else if condition because if we get 1 then nothing would be returned so for 1 we would return 1
	{
		return 1;
	}
}
//OUTPUT-
// Enter value for factorial:5
// 120
// ---------------------
