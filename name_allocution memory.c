/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int sum=0;
    int r, i=0;
    int n=1810206037;
    char *name="emir";
//emir 4 characters
char *str=(char*)malloc(strlen(name)*sizeof(char));
strcpy(str, name);
while(n){
    r=n%10;
   sum=sum+r;
   n=n/10;
}
sum;
printf("the sum of digit is :%d\n",sum);
str=(char*)realloc(str, (sum+strlen(str))*sizeof(char));
while(i<sum){
strcat(str, name);
i=i+strlen(str);
}
printf("%s", str);
return 0;
} 