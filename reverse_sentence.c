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
    char *sentence="I Love Programming Language Course ! ";
    char *ptr=(char*)malloc(strlen(sentence)*sizeof(char));
    strcpy(ptr ,sentence);
    int n=strlen(sentence);
    int i;
    int j=0;
    for(i=n-1; i>=0; i--){
        if(*(ptr+i)==' ' || i==0){
            if(i==0) j=0;
            else j=1;
            while(*(ptr+i+j)!=' ' && *(ptr+i+j)!='\0'){
                printf("%c ",*(ptr+i+j));
                j++;
            }
            printf(" ");
        }
    }
    return 0;
}
