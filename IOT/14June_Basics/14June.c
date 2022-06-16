//1. InputOutput
#include<stdio.h>
void main(){
	printf("ENTER VAL ");
	//single comment
	/*multiline
	comment*/
	int a;
	scanf ("%d",&a);
	printf("%d",a);
}
//--------------------------------------------------//
//2. PrePost
#include<stdio.h>
void main(){
  
int a=5;

printf("%d",a);//5
printf("%d",a++);//a=5 and then incremented after printing as operator is baadme 
printf("%d",a);//a=6 
  
int b=5;

printf("%d",b);//b=5
printf("%d",++b);// b=6 first incremented and then output as operator is pahle 
printf("%d",b);// b=6
}
//---------------------------------------------------//
//3. Multi_input_output
#include<stdio.h>
void main()
{
int a, b,c;
scanf("%d%d%d",&a,&b,&c);
//&a means a me field scifier as d so int type me hi jayegi and 
// variables with& and comma separated 
// in format specifier without comma in scanf
  
printf("a=%d\t b=%d\t c=%d",a,b,c);
//\t one tab space 
}

// OUTPUT-
// 20
// 30
// 40
// a=20     b=30    c=40
//-----------------------------------------------//
//4. Ternary
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
