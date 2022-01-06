# Parallel-distributed-computing-programs
Parallel and Distributed Computing programs using OpenMP and MPI </br> 
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
-> [Code](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/code1.c)  &nbsp; [PDF](https://github.com/ishanjogalekar/Parallel-distributed-computing-programs/blob/main/PDFs/19BCE2250%20Assignment%201%20PDC%20LAB.pdf)

