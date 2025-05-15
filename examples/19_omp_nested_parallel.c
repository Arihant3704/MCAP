#include <stdio.h>
#include <omp.h>

int main() {
    #pragma omp parallel
    {
        printf("Outer parallel region: Thread %d\n", omp_get_thread_num());

        #pragma omp parallel
        {
            printf("Inner parallel region: Thread %d\n", omp_get_thread_num());
        }
    }

    return 0;
}
