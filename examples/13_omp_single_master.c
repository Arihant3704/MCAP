#include <stdio.h>
#include <omp.h>

int main() {
    #pragma omp parallel
    {
        #pragma omp single
        {
            printf("Only one thread will execute this\n");
        }

        #pragma omp master
        {
            printf("Only the master thread will execute this\n");
        }
    }

    return 0;
}
