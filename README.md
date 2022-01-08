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
