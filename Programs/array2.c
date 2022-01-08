#include<stdio.h>
#include<omp.h>
#include <stdlib.h>
void main()
{
  int arr[5];
  int sum=0; //Sum as addition

	printf("Enter elements in array\n");
	// taking input and storing it in an array
  for(int i = 0; i < 5; ++i) {
     scanf("%d", &arr[i]);
	 }
	 printf("Sum elements using OpenMP\n");
   /* OpenMP Parallel For With Reduction Clause */
   #pragma omp parallel 
   {
     #pragma omp for
     for (int i=0;i<5;i++){
       sum+=arr[i];
     }
     printf("Sum of elements=%d\n",sum);
   }
}
