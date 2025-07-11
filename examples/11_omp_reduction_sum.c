#include <stdio.h>
#include <omp.h>

int main() {
    int sum = 0;

    #pragma omp parallel for reduction(+:sum)
    for (int i = 0; i < 10; i++) {
        sum += i;
    }

    printf("Final sum: %d\n", sum);
    return 0;
}
