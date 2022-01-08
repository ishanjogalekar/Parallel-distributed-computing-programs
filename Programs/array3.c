#include<stdio.h>
#include<omp.h>
#include <stdlib.h>
void main(){
  int arr[5];
  int result=1; //Result as product

	printf("Enter elements in array\n");
	// taking input and storing it in an array
  for(int i = 0; i < 5; ++i){
     scanf("%d", &arr[i]);
	 }
	 printf("Prodcut elements using OpenMP\n");
   /* OpenMP Parallel For With Reduction Clause */
   #pragma omp parallel for
     for (int i=0;i<5;i++){
       result *= arr[i]; //Multiplying elements and storing it in result
     }
    printf("Product of elements=%d\n",result);
}
