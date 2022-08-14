/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int lettre[26]={0};
    char *name="PROGRAMLAMA";
    int i=0;
    while(i<strlen(name)){
        if(*(name+i)<=90 && *(name+i)>=65){
            lettre[*(name+i)-65]++;
        }
        i++;
    }
    for(i=0; i<26; i++){
        if(*(lettre+i)>0)
    printf("%c karakter %d adet\n", i+65, lettre[i]);    
    }
    return 0;
}
