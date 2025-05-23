/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int age;
    printf ("enter age: ");
    scanf ("%d", &age);
    
    if (age>= 18){
    printf("adult  \n");
    }
    else if (age > 13 && age <18){
    printf ("teenager \n");
    }
    else {
        printf (" child \n");
    }
        
      
    
    return 0;
}