#include<stdio.h>
#include<omp.h>
#include <stdlib.h>
/* Main Program */
void main()
{
  int arr[5]; 
	printf("Enter elements in array\n");
	// taking input and storing it in an array
    for(int i = 0; i < 5; ++i) {
		scanf("%d", &arr[i]);
	 }
	printf("Printing elements using OpenMP\n");
	/* OpenMP Parallel For With Reduction Clause */
	#pragma omp parallel
	{
		#pragma omp for
		  for(int i=0;i<5;i++)
			{
				printf("arr[%d]=%d\n",i,arr[i]);
			}
	}
}
