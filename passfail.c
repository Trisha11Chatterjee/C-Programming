/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int number;
    printf ("enter number 1-100 : ");
    scanf ("%d", &number);
    if (number<= 30)
    {
        printf ("student failed \n");
        
    }
    
        else {
            printf ("student passed \n");
        }
    
     return 0;   
}