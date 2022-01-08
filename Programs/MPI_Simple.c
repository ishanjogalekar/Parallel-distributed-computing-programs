#include <stdio.h>
#include <mpi.h>

int main(int argc,char** argv){
    //Intializing MPI env
    MPI_Init(NULL,NULL);

    //Get no of process 
    int no_process;
    MPI_Comm_size(MPI_COMM_WORLD, &no_process);

    //Rank of process 
    int rank_process;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank_process);

    // Get the name of the processor
    char processor_name[MPI_MAX_PROCESSOR_NAME];
    int name;
    MPI_Get_processor_name(processor_name, &name);

    //print message 
    printf("This message is from processor: %s, rank: %d out of -  %d processors\n",processor_name, rank_process, no_process);

    //End of MPI env
    MPI_Finalize();
}
