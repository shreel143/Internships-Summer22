// 1. POINTERS ------------------------------------------------------------------------//
#include<stdio.h>

int main() {
    int a= 25;
int *p=&a;
printf("before  inc :%x",p);
printf("\nvalue pointed by original pointer :%d",*p);
p=p+1;
printf("\nafter  inc :%x",p);
printf("\nvalue pointed by incremented pointer :%d",*p);
printf("\nvalue pointed by incremented pointer :%x",*p); // shows address of its own as that memory is not initialised 
}
// OUTPUT-
//  before  inc :62fe14
// value pointed by original pointer :25
// after  inc :62fe18
// value pointed by incremented pointer :6487576
// value pointed by incremented pointer :62fe18
//------------------------------------------------------------------------//
#include<stdio.h>

int main() {
    int a= 25;
int *p=&a;
printf("before  inc :%x",p);
printf("\nvalue pointed by original pointer :%d",*p);
p=p+4;
printf("\nafter  inc :%x",p);
printf("\nvalue pointed by incremented pointer :%d",*p);
printf("\nvalue pointed by incremented pointer :%x",*p);
}
// OUTPUT-
//  before  inc :62fe14
// value pointed by original pointer :25
// after  inc :62fe24
// value pointed by incremented pointer :0
// value pointed by incremented pointer :0
//---------------------------------------------------------------------//
//2. SIZEOF-----------------------------------------------------------------------------//
#include<stdio.h>

int main() {
int a= 25;
int *p=&a;
char b='b';
char *p2=&b;
int a2[5];
int a3[5][5];

printf("\n SIZE OF INTEGER VAR : %d",sizeof(a));
printf("\n SIZE OF INTEGER POINTER : %d",sizeof(p));

printf("\n SIZE OF CHAR VAR %d",sizeof(b));
printf("\n SIZE OF CHAR POINTER :%d",sizeof(p2));

printf("\n SIZE OF 1D ARRAY i.e. a[5] : %d",sizeof(a2)); //5*4=20
printf("\n SIZE OF 2D ARRAY i.e. a[5][5] : %d",sizeof(a3)); //5*5*4=20*5=100
}
// OUTPUT-
//  SIZE OF INTEGER VAR : 4
//  SIZE OF INTEGER POINTER : 8
//  SIZE OF CHAR VAR 1
//  SIZE OF CHAR POINTER :8
//  SIZE OF 1D ARRAY i.e. a[5] : 20
//  SIZE OF 2D ARRAY i.e. a[5][5] : 100
//------------------------------------------------------------------------------------//
