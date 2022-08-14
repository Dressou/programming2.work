/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int prime(int n, int i){
  if(i==1) return 1;
  else{
     if(n%2==0){
        return 0; 
     } 
     else prime(n, i-1);
  }
}
int main()
{
   int n=51, m=n/2;
   int result = prime(n, m);
   if(result==1) printf("%d is prime number",n);
   else printf("%d is not prime number",n);
    return 0;
}
