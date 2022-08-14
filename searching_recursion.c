/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int el_search(int a[], int n, int search){
    if(a[n]==search) return 1;
    else if(n==-1) return -1;
    else return el_search(a, n-1, search);
}
int main()
{
  int array[3]={15,25,35};
  int search=25;
  int found=el_search(array ,3, search);
  if(found==1) printf("element is founded");
  else printf("element is not founded");
    return 0;
}
