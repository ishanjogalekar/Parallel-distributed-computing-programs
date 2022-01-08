#include <stdio.h>
#include <omp.h>

void main(){
    printf("--Star pattern using Openmp : Scheduling(Static)--\n");
    #pragma omp parallel
    {
        int i;
        #pragma omp for schedule(static,1)
        for(i=0;i<5;i++){
             for(i=0;i<6;i++){
                printf(" * ");
            }
            printf("\n");
        }
    }
}
