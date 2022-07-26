/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int power(int a, int b){
    if(b=0) 
    return 1;
    else
    return a*power(a, b-1);
}
int main()
{
  int a, b;
  printf("enter a: ");
  scanf("%d",&a);
  printf("enter b: ");
  scanf("%d",&b);
  int result = power(a, b);
  printf("why\n");
  printf("the power of %d to %d is : %d  ", a,b,result);
    return 0;
}
