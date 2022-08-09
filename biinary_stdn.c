/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
   int n=1810205557;
   int *ptr;
   int i=0, j=0;
   ptr=(int*)malloc(sizeof(int));
   while(n){
     *(ptr+i)=n%2;
     i++;
     ptr=(int*)realloc(ptr, (i+1)*sizeof(int));
     n=n/2;
   }
   for(j=i-1; j>=0; j--)printf("%d",*(ptr+j));
return 0;
} 