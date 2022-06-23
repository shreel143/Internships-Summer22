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
