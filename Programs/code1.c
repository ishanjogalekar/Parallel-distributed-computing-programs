#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
void main()
{
   
    int nest = omp_get_nested(); //Checking threads are nested or not
    printf("-------------\n");
    if(nest == 1)
    {
        printf("--Nested Parallelism Started--\n");
    }
    else
    {
        printf("--Nested Parallelism Not Started--\n");
    }
    
    #pragma omp parallel
    //starting parallel code

    {
        int i = omp_in_parallel();
        printf("Curent parallel threads: %d\n",i); //TO get curent true region of parallel threads
        int t_ava = omp_get_dynamic(); //To get no of threads available
        int num_p = omp_get_num_procs(); //number of available processors
        omp_set_num_threads(6); //Requesting OS to set 6 threads

        printf("Number of processors: %d\n",num_p);
        printf("Number of available threads: %d\n",t_ava);
        printf("---Printing Hello World With OpenMp----\n");
        int a = omp_get_thread_num(); //To get current number of running thread for program
        int b = omp_get_num_threads();
        printf("Hello World(Thread no: %d)\n",a);
        printf("Total number of threads: %d\n",b);
    }
    printf("\n");
}
