/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
    int sum=0;
int lcm(int a, int b){
    sum+=b;
    if((sum%a==0)&&(sum%b==0)){
        return sum;
    }
    else return lcm(a,b);
}
int main()
{
  int n=12, m=20;
  int result;
  if(n>m) result=lcm(n, m);
  else result=lcm(m, n);
  printf("the lcm of %d and %d is %d",n,m,result);
    return 0;
}
