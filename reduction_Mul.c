#include <stdio.h>
#include <omp.h>
void main(){
    printf("***Product of elements in array using reduction in OpenMP***\n");
    int arr[6]={1,2,3,4,5,6};
    int mul=1,i;
    //Parallel OpenMP block with shared and reduction clause
    #pragma omp parallel shared(arr,mul) 
    {
        #pragma omp for reduction(*:mul)
        for (i = 0; i < 6; i++) //For loop to interate between each element of array
        {
            mul *= arr[i]; //Calculating Sum 
        }
    }
    printf("Product of elements in array = %d\n",mul); 
}
