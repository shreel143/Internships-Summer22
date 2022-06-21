//20 JUNE 
//1. FACTORIAL
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

//2. FIBONACCI 
// APPROACH 1 
#include <stdio.h>
void main()
{
	int s1=0;
	int s2=1;
	int n;
	printf("Enter number of places :");
	scanf("%d",&n);
	fib(s1,s2,n);
}
int fib(int f,int s,int p){
	static int c=1;
	if (c==1){
		printf("%d\t",f);
		c++;
		fib(f,s,p);
	}
	else if (c==2){
		printf("%d\t",s);
		c++;
		fib(f,s,p);
	}
	else if (c<=p)
	{
		printf("%d\t",f+s);
		c++;
		fib(s,f+s,p);
	}
}
// OUTPUT-
// Enter number of places :10
// 0       1       1       2       3       5       8       13      21      34
// --------------------------------
//APROACH 2

// Fibonacci Series using Space Optimized Method(BUT NOT RECURSION AS WE ARE NOT CALLING FUNCTION INSIDE FUNCTION)
#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm << ", ";
    }
    return 0;
}
// OUTPUT-
// Enter the number of terms: 10
// Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 
//-----------------------------------------------------------------------//
