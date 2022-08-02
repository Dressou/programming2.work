/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int rev=0;
/*int sum(int A[], int x){
    int s;
    if(x==1) return A[0];
    else{
        return ( A[x-1]+sum(A, x-1));
    }
    }*/
/*int sum(int x){
    int res=0;
    if(x==0) return 0;
    else return res=x+sum(x-1);  
}*/
int bin(int x){
    if(x){
        rev=rev*10+x%10;
        bin(x/10);
    }
    else return rev;
}
int main(){
    int x;
    int rev=0;
    printf("enter x : ");
    scanf("%d",&x);
    int x1=x;
    //int A[5]={1,2,3,4,5};
    printf("the reverse is %d",bin(x));
    /*while(x){
        rev=rev*10+x%10;
        x/=10;
    }
    printf("the reverse of %d is %d",x1,rev);*/
    return 0;
}