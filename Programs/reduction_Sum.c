#include <stdio.h>
#include <omp.h>
void main(){
    printf("***Sum of elements in array using reduction in OpenMP***\n");
    int arr[6]={1,2,3,4,5,6};
    int sum=0,i;
    //Parallel OpenMP block with shared and reduction cluase
    #pragma omp parallel shared(arr,sum) 
    { 
        #pragma omp for reduction(+:sum)
        for (i = 0; i < 6; i++) //For loop to interate between each element of array
        {
            sum += arr[i]; //Calculating Sum 
        }
    }
    printf("Sum of elements in array = %d\n",sum);  
}
