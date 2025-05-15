#include <stdio.h>
#include <omp.h>

int main() {
    #pragma omp parallel
    {
        printf("Before barrier: Thread %d\n", omp_get_thread_num());

        #pragma omp barrier

        printf("After barrier: Thread %d\n", omp_get_thread_num());
    }

    return 0;
}
