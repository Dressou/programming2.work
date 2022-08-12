/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char compare(char *name1, char *name2){
    while(name1 && name2 && name1==name2){
      name1++;
      name2++;
   }
   return *name1-*name2;
}
void compte(char *name1, char *name2){
    int c1=strlen(name1), c2=strlen(name2);
    if(c1<c2) printf("\n %s is longer than %s",name2, name1);
   else printf("\n %s is longer than %s",name1, name2);
}
int main()
{ 
   char *name1="karim";
   char *name2="chakour";
   int result=compare(name1 , name2);
   if(result==0) printf("they are same ");
   else printf("they are not same");
   compte(name1, name2);
    return 0;
}
