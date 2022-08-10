/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr=(int*)malloc(sizeof(int));
    int n;
    int i, j;
    printf("enter the size of your array:");
    scanf("%d",&n);
    for(i=0; i<n ; i++){
        scanf("%d ",(ptr+i));
        ptr=(int*)realloc(ptr, (1+i)*sizeof(int));
    }
    printf("the array is : ");
    for(i=0; i<n ; i++){
      printf("%d ", *(ptr+i));  
    }
    for(i=1; i<n; i++){
        for(j=1; j<n-i; j++){
            if(*(ptr+j)>*(ptr+j+1)){
                int temp=*(ptr+j);
                *(ptr+j)=*(ptr+j+1);
                *(ptr+j+1)=temp;
            }
        }
    }
     printf("\n the new array is : ");
    for(i=0; i<n ; i++){
      printf("%d ", *(ptr+i));  
    }
    return 0;
}
