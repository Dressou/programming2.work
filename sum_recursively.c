/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int sum(int n){
    if(n==0) return 0;
    else return n+sum(n-1);
}
int main()
{
  int n;
  printf("enter n: ");
  scanf("%d",&n);
  printf("The sum of %d first number is : %d ",n,sum(n));
    return 0;
}
