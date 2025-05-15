#include <stdio.h>
#include <omp.h>

omp_lock_t lock;

int main() {
    omp_init_lock(&lock);

    #pragma omp parallel
    {
        omp_set_lock(&lock);
        printf("Thread %d has the lock\n", omp_get_thread_num());
        omp_unset_lock(&lock);
    }

    omp_destroy_lock(&lock);
    return 0;
}
