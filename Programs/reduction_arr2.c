#include <stdio.h>
#include <omp.h>
int main(void){
    printf("***Minimum and maximum element in array using reduction and critical  in OpenMP***\n");
    int arr[10] = {12, 11, 31, 4, 5, 7, 88, 19, 10, 65};
    int MaxValue = 0, i, MinValue = 100;
    #pragma omp parallel reduction(max : MaxValue) reduction(min: MinValue)
    {
        #pragma omp for
        for(i = 0; i < 10; i++){
            #pragma omp critical
            {
                if(arr[i] > MaxValue){
                    MaxValue = arr[i];
                }
                if(arr[i] < MinValue){
                    MinValue = arr[i];
                }
            }
        }
    }
    printf("Maximum value in array = %d\n", MaxValue);
    printf("Minimum value in array = %d\n", MinValue);
}
