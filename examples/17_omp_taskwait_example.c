#include <stdio.h>
#include <omp.h>

int main() {
    #pragma omp parallel
    {
        #pragma omp single
        {
            #pragma omp task
            {
                printf("Task 1 executed by thread %d\n", omp_get_thread_num());
            }

            #pragma omp task
            {
                printf("Task 2 executed by thread %d\n", omp_get_thread_num());
            }

            #pragma omp taskwait
            {
                printf("All tasks are completed\n");
            }
        }
    }

    return 0;
}
