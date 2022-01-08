# Parallel-distributed-computing-programs
## Parallel and Distributed Computing programs using OpenMP and MPI </br> 
### Notes: [View](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/PDFs/Combined%20Study%20Material.pdf) 
***Note: To exceute codes use linux command terminal.***

---
### Steps to run OpenMP program:</br>
***Copy & paste following command to install openmp package in Linux-***
```
sudo apt install libomp-dev
```
**Follow these two commands in terminal to run OpenMP Programs:**</br>
 
```
gcc -fopenmp openmp1.c -o code 
```
 
```
./code
```
---

</br>

---
### Stpes to run MPI program:</br>
***Copy & paste following command to install MPIH package in Linux-***
```
sudo apt install mpich
```
**Follow these two commands in terminal to run MPI programs:**</br>
```
mpicc -o c1 MPICode1.c
```

```
mpirun -np 6 ./c1
```
**Note:    -np (following number) shows the number of processors to be used to run program**

---

## Questions : 
1. Write a simple OpenMP program to demonstrate the parallel loop construct. A.Use OMP_SET_THREAD_NUM( ) and OMP_GET_THREAD_NUM( ) to find the number of processing unit. B.Use function invoke to print ‘Hello World’. C.To examine the above scenario, the functions such as omp_get_num_procs(), omp_set_num_threads(), omp_get_num_threads(),omp_in_parallel(),omp_get_dynamic() and omp_get_nested() are listed and the explanation is given below to explore the concept practically.  
omp_set_num_threads() - takes an integer argument and requests that the Operating System provide that number of threads in subsequent parallel regions. </br>
->[Code](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/Programs/code1.c)  &nbsp; [**PDF**](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/PDFs/19BCE2250%20Assignment%201%20PDC%20LAB.pdf) </br>

2. Write a simple OpenMP program to demonstrate the use of ‘for’ clause.
- Print ‘n’ array elements. ->[Code 1](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/Programs/array1.c)
- Sum of n’ array elements. ->[Code 2](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/Programs/array2.c) 
- Product of ‘n’ array elements. ->[Code 3](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/Programs/array3.c) <br/>
[**PDF**](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/PDFs/19BCE2250%20DA%202.pdf) <br/>

3. Write  a  simple  OpenMP  program  to  employ  a  ‘reduction’  clause  to express the reduction of a for loop. In order to specify the reduction in OpenMP, we must provide 1.An operation (+ / * / o) and 2.A reduction variable (sum / product / reduction). This variable holds the result of the computation. &nbsp;
->[Code for SUM](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/Programs/reduction_Sum.c) &nbsp; ->[Code for Multiplication](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/Programs/reduction_Mul.c) </br>
*SCENARIO – II* : Write an OpenMP program to find the smallest element in a list of numbers using OpenMP REDUCTION clause. </br>
->[Code](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/Programs/reduction_arr1.c) </br>
*SCENARIO – III* : Write an OpenMP  program  to find the Max and  Min elements in a list of numbers using OpenMP Critical clause to understand. &nbsp;
->[Code](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/Programs/reduction_arr2.c) </br>
[**PDF of question**](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/PDFs/19BCE2250%20DA%203.pdf) </br>

4. Write a simple OpenMP program to demonstrate Arithmetic Operation using Section Clause. </br>
->[Code](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/Programs/reduction_arithmetic.c)   &nbsp;   [PDF](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/PDFs/19BCE2250%20DA%204.pdf) </br> 

5. Write a simple OpenMP program to demonstrate the use of pattern generation in schedule clause. </br>
-Static Approch   &nbsp;    [Code](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/Programs/Star_Static.c) </br>
-Dynamic Approch   &nbsp;    [Code](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/Programs/Star_Dynamic.c) </br>
[PDF](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/PDFs/19BCE2250%20DA%205.pdf) </br>

6. Consider a suitable instance that has MPI routines to assign different tasks to different processors. </br>
[Code](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/Programs/MPI_Simple.c)   &nbsp;   [PDF](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/PDFs/19BCE2250%20DA%206.pdf) </br>

7. Consider the following program, called mpi_sample1.c. This program is written in C with MPI commands included. The new MPI calls are to MPI_Send and MPI_Recv and to 
MPI_Get_processor_name. The latter is a convenient way to get the name of the processor on which a process is running. MPI_Send and MPI_Recv can be understood by stepping back and considering the two requirements that must be satisfied to communicate data between two processes: </br>
1.Describe the data to be sent or the location in which to receive the data  
2.Describe the destination (for a send) or the source (for a receive) of the data. </br>
[Code](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/Programs/MPI_Send_Receive.c)   &nbsp;   [PDF](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/PDFs/19BCE2250%20DA%207%20.pdf) </br>

8. Write a ‘C’ program to initialize the communication pattern of a broadcast. The code logic can typically have a process zero [as root], which has the initial copy of the data to broadcast to other processes. </br>
[Code](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/Programs/MPI_Bcast.c)   &nbsp;   [PDF](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/PDFs/19BCE2250%20DA%208.pdf) </br>

9. Write a C program to use MPI_Reduce that divides the processors into the group to find the addition independently. </br>
[Code](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/Programs/MPI_Reduce.c)   &nbsp;   [PDF](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/PDFs/19BCE2250%20DA%209.pdf) </br>

10. Assume the variable rank contains the process rank and root is 3. What will be stored in array "b []" on each of four processes if each executes the following code fragment. </br>
[Code](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/Programs/MPI_Gather.c)   &nbsp;   [PDF](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/PDFs/19BCE2250%20DA%2010.pdf) </br>

11. Write a ‘C’ Program to initialize  an  array  of  100  elements  in  order  to  perform  the  sum  of the elements sharing the load among 4 processes using MPI Send and MPI Recv operation.*Lab CAT2 Exam* </br>
[Code](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/Programs/MPI_arr.c)   &nbsp;   [PDF](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/PDFs/19BCE2250%20LAB%20cat%202%20.pdf) </br>

12. FAT Exam </br>
[Code](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/Programs/FAT.c)   &nbsp;   [PDF](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/PDFs/19BCE2250.pdf) </br>

---
