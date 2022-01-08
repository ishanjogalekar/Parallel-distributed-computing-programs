#include <mpi.h>
#include <stdio.h>
int main(int argc, char** argv) {
        
        int rank;
        char buf[50] = "Hello";
        const int root=0;
        
        //MPI starting and also finding rank for each process 
        MPI_Init(&argc, &argv);
        MPI_Comm_rank(MPI_COMM_WORLD, &rank);

        //Message call for root (0th Process)
        if(rank == root) {
            printf("\n[%d]: Before Bcast, Message: %s\n\n", rank, buf);
        }

        //everyone calls bcast, data is taken from root and ends up in everyone's buf 
        //MPI Bcast functiom
        MPI_Bcast(&buf, 1, MPI_CHAR, root, MPI_COMM_WORLD);

        //Printing after Bcast function
        printf("[%d]: After Bcast,Message: %s\n\n", rank, buf);

        //Ending MPI
        MPI_Finalize();
        return 0;
}
