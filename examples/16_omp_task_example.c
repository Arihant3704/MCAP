#include <stdio.h>
#include <omp.h>

int main() {
    #pragma omp parallel
    {
        #pragma omp single
        {
            #pragma omp task
            {
                printf("Task executed by thread %d\n", omp_get_thread_num());
            }
        }
    }

    return 0;
}
