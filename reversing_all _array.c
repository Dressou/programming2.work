/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*int  compte(int *ptr, int n){
    if(n==0) return 0;
    else
    {if (*(ptr+n)%2!=1) return 1+compte(ptr, n-1);
    else return compte(ptr, n-1);
    }
}*/
int sum, r;
int main()
{
    int A[8]={23,76,8,76,67,8,54,343};
    int i, j=0;
    for(i=0; i<8; i++){
        sum=0;
        while(A[i]!=0){
     r=A[i]%10;
     sum=sum*10+r;
     A[i]/=10;
        }
        printf("%d ",sum);
}
    //int result=compte(A,8);
    //printf("%d",result);
    return 0;
}
