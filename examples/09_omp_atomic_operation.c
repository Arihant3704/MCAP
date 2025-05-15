#include <stdio.h>
#include <omp.h>

int main() {
    int counter = 0;

    #pragma omp parallel for
    for (int i = 0; i < 10; i++) {
        #pragma omp atomic
        counter++;
    }

    printf("Final counter value: %d\n", counter);
    return 0;
}
