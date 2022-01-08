#include <stdio.h>
#include <omp.h>

void main(){
    printf("--Star pattern using Openmp : Scheduling(Dynamic)--\n");
    #pragma omp parallel
    {
        int i;
        #pragma omp for schedule(dynamic,2)
        for(i=0;i<5;i++){
            for(i=0;i<6;i++){
                printf(" * ");
            }
            printf("\n");
        }
    }
}
