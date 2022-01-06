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
