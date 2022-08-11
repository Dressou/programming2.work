/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n;
    printf("enter the value of n : ");
    scanf("%d",&n);
    int *ptr=(int*)malloc(n*sizeof(int));
    for(i=0; i<n; i++){
        scanf("%d",ptr+i);
    }
    printf("your array is : ");
    for(i=0; i<n; i++){
        printf("%d ",*(ptr+i));
    }
    int max=*(ptr);
    printf("\nmax is assigned as %d",max);
    for(i=1; i<n; i++){
        if(max<*(ptr+i)){
            int temp=*(ptr+i);
            max=*(ptr+i);
            *(ptr+i)=temp;
        }
    }
    printf("\nthe greatest number is %d",max);
    return 0;
}
