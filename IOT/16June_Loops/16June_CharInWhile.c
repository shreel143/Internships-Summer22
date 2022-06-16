//3. CHAR UPDATION BY USER THROUGH WHILE LOOP
#include <stdio.h>
void main()
{
    char per;
    per = 'y';
    while (per == 'y') // to compare char use "==" and char value in single ' ' 
    {
        printf("\tSUCCESS!! ");
        printf("\nDo you wish  to continue \n Enter y or n :");
        scanf("%c", &per);
    }
}
//OUTPUT-
//         SUCCESS!!
// Do you wish  to continue
//  Enter y or n :y
//         SUCCESS!!
// Do you wish  to continue
//  Enter y or n :

