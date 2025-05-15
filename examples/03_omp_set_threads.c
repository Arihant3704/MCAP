#include <stdio.h>
#include <omp.h>

int main() {
    omp_set_num_threads(4); // Set the number of threads to 4
    #pragma omp parallel
    {
        printf("Hello from thread %d\n", omp_get_thread_num());
    }
    return 0;
}
