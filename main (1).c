/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    printf("Size of integer is %ld\n",sizeof(int));
    int n;
    printf("Enter integer :");
    scanf("%d",&n);
    printf("Size of integer is %ld",sizeof(n));
}

