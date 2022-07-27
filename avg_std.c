/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int calculate(int A[], int num){
    int i;
    int count=0, avg=0;
     for(i=0; i<num; i++) {
        if(A[i]>=60) 
    count++;
  }
return count;
  for(i=0; i<num; i++) {
    avg+=A[i];
  }
  printf("%d",avg/num);
  //return count, avg;
}
int main()
{
  int n;
  printf("enter n: ");
  scanf("%d",&n);
  if(n>100) 
    printf("Student must be less than 100");
  else printf("There are %d students\n",n);
  int A[n], i;
  for(i=0; i<n; i++) {
    printf("Enter no %d student grade : ",i+1);
    scanf("%d",&A[i]);
  }
  printf("\n All grades are : ");
   for(i=0; i<n; i++) {
    printf(" %d ",A[i]);
  }
  printf("\n");
  printf("%d students are failed",calculate(A, n));
    return 0;
}
