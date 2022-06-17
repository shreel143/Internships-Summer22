#include <stdio.h>
int add(int x, int y);
    // SEMICOLON IS THERE AT END IN DECLARTION 
int sub(int x, int y){
	return x-y;
}
    // NO SEMICOLON WHEN DECLARTION+DECLARATION AT ONCE 
void main()
{
	int x=5;
    printf("SUM: %d",add(10,20));
    printf("\nSUM: %d",add(x,20));
    printf("\nDIFFERENCE: %d",sub(20,10));
    printf("\nDIFFERENCE: %d",sub(x,20));
}
int add(int x, int y){
	return x+y;
}

// OUTPUT-
// SUM: 30
// SUM: 25
// DIFFERENCE: 10
// DIFFERENCE: -15
// --------------------------------
