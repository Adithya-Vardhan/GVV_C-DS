/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    fun1(5);

    return 0;
}
void fun1(int n) {
    if (n==0) return;
    printf("%d",n);
    fun2(n-2);
    printf("%d",n);
}

void fun2(int n) {
    if (n==0) return;
    printf("%d",n);
    fun1(++n);
    printf("%d",n);
}
