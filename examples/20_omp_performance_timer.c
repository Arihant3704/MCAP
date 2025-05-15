#include <stdio.h>
#include <omp.h>

int main() {
    double start_time = omp_get_wtime();

    #pragma omp parallel for
    for (int i = 0; i < 1000000; i++) {
        // Simulate work
    }

    double end_time = omp_get_wtime();
    printf("Parallel execution time: %f seconds\n", end_time - start_time);

    return 0;
}
