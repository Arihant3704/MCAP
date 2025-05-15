#include <stdio.h>
#include <omp.h>

int main() {
    int counter = 0;

    #pragma omp parallel for
    for (int i = 0; i < 10; i++) {
        #pragma omp critical
        {
            counter++;
            printf("Thread %d, counter: %d\n", omp_get_thread_num(), counter);
        }
    }

    return 0;
}
