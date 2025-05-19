/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter a");
    scanf ("%d", &a);
    
    printf("Enter b");
    scanf ("%d", &b);
    
    int sum = a+ b;
    printf ("sum is : %d", sum);
    return 0;
}