/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int odd(int *ptr, int n){
    if(n==0) 
    return 0;
    
    else {
        if(ptr[n-1]%2==1)return 1+odd(ptr,n-1);
        else return odd(ptr,n-1);
    }
    
}
int main()
{
 int a[5]={1,2,6,9,5}, output;
 output=odd(a, 5);
  printf("the odd numbers are : ");
     
         printf("%d ",output);
    
    return 0;
}
