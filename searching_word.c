/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int search(char *str,char *word, int n, int m){
    int i=0; 
    while(i<n){
    int j=0;
    while(i<n && j<m && *(str+i)==*(word+j)){
        i++;
        j++;
    }
    if((i==n || *(str+i)==' ') && j==m) return 1;
    while(i<n && *(str+i)!=' '){i++;}
    i++;
    }

}
int main()
{ 
    char *str="la vie a ses bas et ses hauts faut toujours se rappeller!";
    int n=strlen(str);
    char *word="base";
    int m=strlen(word);
    int result=search(str,  word, n, m);
    if(result==1) printf("the word is found");
    else printf("the word is not found");
    return 0;
}
