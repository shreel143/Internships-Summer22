// 2D ARRAY
#include <stdio.h>    
void main ()    
{    
    int arr[3][3],i,j;     
    for (i=0;i<3;i++)    
    {    
        for (j=0;j<3;j++)    
        {    
            printf("Enter a[%d][%d]: ",i,j);                
            scanf("%d",&arr[i][j]);    
        }    
    }    
    printf("\n printing the elements ....\n");     
    for(i=0;i<3;i++)    
    {    
        printf("\n");    
        for (j=0;j<3;j++)    
        {    
            printf("%d\t",arr[i][j]);    
        }    
    }    
}    

//OUTPUT-
// Enter a[0][0]: 56   
// Enter a[0][1]: 10   
// Enter a[0][2]: 30   
// Enter a[1][0]: 34  
// Enter a[1][1]: 21 
// Enter a[1][2]: 34    
// Enter a[2][0]: 45
// Enter a[2][1]: 56
// Enter a[2][2]: 78   

//  printing the elements .... 
 
// 56      10      30  
// 34      21      34  
// 45      56      78
//----------------------------------------------------------------------------------//

// 2. POINTERS
#include <stdio.h>    
void main ()    
{    
    int a=10;
    int *p=&a;
    printf("ADDRESS IN HEXADECIMAL FORMAT :%x",p); //--> printing hexadecimal value i.e address
    printf("\n ADDRESS AS INT :%d",p); // as integer
    printf("\n ADDRESS AS UNSIGNED INT :%u",p);//unsigned 
    printf("\n ADDRESS IN OCTAL FORM :%d",p); // as octal form of address
    printf("\n VALUE OF VARIABLE STORED BY POINTER : %d",*p);
    printf("\n ADDRESS AS INT without using POINTER :%d",&a); // address of a without pointer
}  
// // OUTPUT-
// ADDRESS IN HEXADECIMAL FORMAT :61fec8
//  ADDRESS AS INT :6422216
//  ADDRESS AS UNSIGNED INT :6422216
//  ADDRESS IN OCTAL FORM :6422216
//  VALUE OF VARIABLE STORED BY POINTER : 10
//  ADDRESS AS INT without using POINTER :6422216

//----------------------------------------------------------------------//
// 3. CALL BY REFERENCE 
#include <stdio.h>    
void main ()    
{    
    int a=10;
    change(&a);
}  

int change(int *s){
    printf("before change :%d",*s);
    *s+=10;
    printf("after change :%d",*s);
}
// OUTPUT-
// before change :10
// after change :20
//---------------------------------------------------------------------//

//4. CALL BY VALUE AND REFERENCE-
#include <stdio.h>    
void main ()    
{    
    int a=10;
    int b=20;
    printf("\tCALL BY VALUE -");
    printf("\nA before change(in main) :%d",a);
    change_by_value(a);
    printf("\nA after change(in main) :%d",a);
    
    printf("\n\tCALL BY REFERENCE -");
    printf("\nB before change(in main) :%d",b);
    change_by_reference(&b);
    printf("\nB after change(in main) :%d",b);
}  

void change_by_value(int s){
    printf("\nA before change(in func) :%d",s);
    s+=10;
    printf("\nA after change(in func) :%d",s);
}
void change_by_reference(int *s){
    printf("\nB before change (in func) :%d",*s);
    *s+=10;
    printf("\nB after change (in func) :%d",*s);
}
// OUTPUT-
//         CALL BY VALUE -
// A before change(in main) :10
// A before change(in func) :10
// A after change(in func) :20
// A after change(in main) :10
//         CALL BY REFERENCE -
// B before change(in main) :20
// B before change (in func) :20
// B after change (in func) :30
// B after change(in main) :30
