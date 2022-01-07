#include <stdio.h>
#include <omp.h>
int main(void){
    printf("***Minimum element in array using reduction in OpenMP***\n");
    int arr[10] = {10, 11, 65, 4, 51, 73, 8, 9, 12, 6};
    int MinValue = 100, i;
    #pragma omp parallel reduction(min : MinValue)
    {
        #pragma omp for
        for(i = 0; i < 10; i++){
            if(arr[i] < MinValue){
                MinValue = arr[i];
            }
        }
    }
    printf("Minimum value in array = %d\n", MinValue);
}
