_Serial-->_
**Complile:** gcc -Wall pi_serial.c
**Run:** ./a.out


_MPI-->_
**Complile:** mpicc -Wall pi_mpi.c
**Run:** mpirun -n (x) ./a.out


_OpenMp->>_
**Complile:**  gcc -Wall -fopenmp pi_openmp.c
**Run:** ./a.out

_MPI & OpenMP-->_
**Complile:**  mpicc -Wall -fopenmp pi_mpi-openmp.c
**Run:** mpirun -n (x) ./a.out
