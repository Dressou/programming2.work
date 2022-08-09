/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int *birlesme(int a[], int s1, int b[], int s2){
    int *ptr;
    ptr=(int*)malloc((s1+s2)*sizeof(int));
    int i, j;
    for(i=0; i<s1 ; i++)
    ptr[i]=a[i];
    for(j=0; j<s2; i++, j++){
        ptr[i]=b[j];
    }
    return ptr;
}
int main()
{
    int a[4]={50, 60, 70, 100};
    int b[4]={55, 61, 80, 99,};
    int s1=4, s2=4;
    int *sonuc=birlesme(a, s1, b, s2);
    for(int j=0; j<8; j++) printf("%d ",sonuc[j]);
    return 0;
}
