#include <stdio.h>
#include <omp.h>

int main() {
    int shared_var = 0;

    #pragma omp parallel private(shared_var)
    {
        shared_var = omp_get_thread_num(); // Each thread gets its own private copy
        printf("Thread %d: shared_var = %d\n", omp_get_thread_num(), shared_var);
    }

    return 0;
}
