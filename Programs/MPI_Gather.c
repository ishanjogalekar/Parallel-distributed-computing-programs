#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    //Starting MPI
    MPI_Init(&argc, &argv);

    // Size of processes
    int size;
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    
    // Array initialization
    int b[8] ={0,0,0,0,0,0,0,0};
    if(size != 8)
    {
        printf("Minimum running requiremnets : 8 MPI processes.\n");
        MPI_Abort(MPI_COMM_WORLD, EXIT_FAILURE);
    }
    // Fix root's rank
    int root = 3;
 
    // Get rank of process
    int rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    
    // Define  value in array
    int value = rank * 1;
    printf("Process %d - value = %d \n", rank, value);
    
    // if root process running MPI gather and print array
    if(rank == root)
    {
        MPI_Gather(&value, 1, MPI_INT, b, 1, MPI_INT, root, MPI_COMM_WORLD);
        printf("Array on process(root) %d: [%d,%d,%d,%d,%d,%d,%d,%d] \n", rank, b[0], b[1], b[2],b[3],b[4],b[5],b[6],b[7]);
    }
    else
    {
        MPI_Gather(&value, 1, MPI_INT, NULL, 0, MPI_INT, root, MPI_COMM_WORLD);
        printf("Array elements collected on process %d: [%d,%d,%d,%d,%d,%d,%d,%d] \n", rank, b[0], b[1], b[2],b[3],b[4],b[5],b[6],b[7] );
    }
    // End MPI
    MPI_Finalize();
    return EXIT_SUCCESS;
}
