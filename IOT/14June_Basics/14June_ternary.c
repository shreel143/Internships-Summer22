#include<stdio.h>
void main()
{
int a=10;
int b=12;

int c=a>b?a:b;

printf("%d",c);

a=a+5;
c=a>b?a:b;
printf("%d",c);

}

// OPTIMISED APPROACH- (as no extra c of 4 byte is created)
#include<stdio.h>
void main()
{
int a=10;
int b=12;

printf("%d",a>b?a:b);

a=a+5;
printf("%d",a>b?a:b);

}

// output-
//   12
//   15
