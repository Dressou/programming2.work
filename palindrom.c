/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    int i, lenght;
    printf("enter the lenght :");
    scanf("%d",&lenght);
    char str[lenght];
    printf("enter your a word : ");
    for(int i=0; i<lenght; i++) {scanf("%s",&str[i]);}
    int h=lenght-1;
             while(i<h-1){
        
            if(str[i++]==str[h--]){
                printf("This is a palindrom word");
                break;
            }
            else printf("this word is not palindrom");
    }
   // for(i=0; i<lenght; i++) {printf("%c",str[i]); }
    //printf("\n the reverse of your name is :"); 
    //for(i=lenght;i>=0;i--){printf("%c",str[i]); }
    return 0;
}