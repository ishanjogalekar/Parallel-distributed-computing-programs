#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int rank, size;
    
    //Intializing MPI
    MPI_Init(&argc, &argv);
    //Fidning rank and size of process
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    
    //Array , it's size and local sum , global sum declaration
    int glob_Sum, loc_sum = 0;
    int arr[] = { 5, 2, 7, 4 };
    int n = 4;
    // If intializing with 0th process rank then print working
    if (rank == 0) 
    {
        printf("Addition of elements in array....\n");
    }
    //Addtion of elements in array
    for (int i = rank; i < n;i += size) 
    {
        printf("arr[%d]: %d\n",i, arr[i]);
        loc_sum += arr[i];
    }
    //MPI reduce to add locala sum in global sum 
    MPI_Reduce(&loc_sum, &glob_Sum, 1, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);
    
    //If rank is 0 print Final sum
    if (rank == 0)
    {
        printf("Final Sum = %d\n", glob_Sum);
    }
    MPI_Finalize();
    return 0 ;
}
