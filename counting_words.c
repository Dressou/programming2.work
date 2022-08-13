/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int search(char *str,char *word, int n){
    int i=0; 
    int count=0;
    while(i<n){
   if(*(str+i)==' '){count ++;};
    i++;
    }
return count;
}
int main()
{ 
    char *str="la vie ses bas  et ainsi que ses hauts faut toujours se rappeller!";
    int n=strlen(str);
    char *word="base";
    int m=strlen(word);
    int result=search(str,  word, n);
    //if(result==1) printf("the word is found");
    //else printf("the word is not found");
    printf("%d",result);
    return 0;
}
