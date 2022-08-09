/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main(){
int n=1810205557;
int *odd, *even, i=0, j=0;
odd=(int*)malloc(sizeof(int));
even=(int*)malloc(sizeof(int));
while(n!=0){
    if(n%2==1){
    *(odd+i)=n%10;
    i++;
    odd=(int*)realloc(odd, (i+1)*sizeof(int));
    }
    else {
    *(even+j)=n%10;
    j++;
    even=(int*)realloc(even, (j+1)*sizeof(int));
    }
    n/=10;
}
printf("the odd numbers : ");
for(int n=0; n<i; n++){
    printf("%d ",*(odd+n));
}
printf("\nthe even numbers : ");
for(int m=0; m<j; m++){
    printf("%d ",*(even+m));
}
return 0;

} 