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

// 2. POINTERS
#include <stdio.h>    
void main ()    
{    
    int a=10;
    int *p=&a;
    printf("%x",p); //--> printing hexadecimal value i.e address
    printf("\n%d",p); // as integer
    printf("\n%u",p);//unsigned 
    printf("\n%d",p); // as octal form of address
    printf("\n%d",*p);
}  
// OUTPUT-
 ADDRESS IN HEXADECIMAL FORMAT :61fec8
 ADDRESS AS INT :6422216
 ADDRESS AS UNSIGNED INT :6422216
 ADDRESS IN OCTAL FORM :6422216
 VALUE OF VARIABLE STORED BY POINTER : 10
