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
