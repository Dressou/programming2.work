/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int binary(int a){
    if(a==0) return 0;
    else return(a%2+10*binary(a/2));
}
int main()
{
  int a, b;
  printf("enter a: ");
  scanf("%d",&a);
  int result = binary(a);
  printf("the binary of %d is %d ",a,result);
    return 0;
}
