/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int gcd(int n, int m){
    if(n%m==0) return m;
    n%=m;
    gcd(m, n);
}
int main()
{
   int n=50, m=10;
   int result = gcd(n,m);
   printf("the gcd of %d and %d is %d",n,m, result);
    return 0;
}
