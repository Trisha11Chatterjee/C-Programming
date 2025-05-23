/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char ch;
    printf ("enter character  : ");
    scanf ("%c", &ch);
    if (ch >= 'A' && ch <= 'Z' )
    {
        printf ("upper case \n");
        
    }
    
        else if (ch >= 'a' && ch <= 'z') {
            printf ("lower case \n");
        }
        else {
            printf ("not an english letter \n");
        }
    
    
}