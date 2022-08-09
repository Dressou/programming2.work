/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int *birlesme(int a[], int s1, int b[], int s2){
    int n=s1+s2;
    int *ptr;
    ptr=(int*)malloc(n*sizeof(int));
    int i=0, j=0;
    for(int k=0; k<n; k++){
        if(a[i]<=b[j]){
        ptr[k]=a[i];
        i++;
        }
        else {
            ptr[k]=b[j];
            j++;
    }
    }
    return ptr;
}
int main()
{
    int a[4]={50, 60, 70, 100};
    int b[6]={11, 12, 55, 61, 80, 99,};
    int s1=4, s2=6;
    int *sonuc=birlesme(a, s1, b, s2);
    for(int j=0; j<10; j++) printf("%d ",sonuc[j]);
    return 0;
}
