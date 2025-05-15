📝 Markdown Lesson Descriptions
01_omp_hello_world.c - Basic Parallel Region
In this lesson, you'll learn about the basic OpenMP syntax to create a parallel region using #pragma omp parallel. This will initiate multiple threads to execute the block of code inside the parallel region.

02_omp_thread_info.c - Thread Information
Explore how to retrieve thread-specific information, such as the thread ID and the total number of threads. This is helpful for understanding how your program is executed in parallel.

03_omp_set_threads.c - Setting the Number of Threads
Learn how to control the number of threads in your OpenMP program using omp_set_num_threads(). This allows you to fine-tune the parallelism in your program.

04_omp_parallel_private.c - Private and Shared Variables
This lesson explains the usage of private, shared, and firstprivate clauses to control the scope of variables in parallel regions.

05_omp_parallel_for.c - Loop Parallelism
Understand how to parallelize loops using the #pragma omp for directive. This is a critical technique for efficiently processing large datasets in parallel.

06_omp_schedule_static.c - Static Loop Scheduling
Learn how to schedule iterations of a loop statically, dividing them equally among threads in a predefined manner.

07_omp_schedule_dynamic.c - Dynamic Loop Scheduling
Explore dynamic scheduling, where iterations are assigned to threads at runtime, helping load balance if iteration times vary.

08_omp_critical_section.c - Critical Sections
Learn how to prevent race conditions using #pragma omp critical. This ensures that only one thread can execute the critical section at a time.

09_omp_atomic_operation.c - Atomic Operations
This lesson introduces atomic operations in OpenMP to perform simple operations like incrementing a variable without locks.

10_omp_barrier_example.c - Synchronization with Barrier
Understand how to synchronize threads using #pragma omp barrier, ensuring that all threads reach a certain point before continuing.

11_omp_reduction_sum.c - Parallel Reduction
Learn how to perform a parallel reduction (e.g., summing an array) using the reduction clause.

12_omp_sections_example.c - Section Parallelism
This lesson covers how to divide your program into independent sections using #pragma omp sections.

13_omp_single_master.c - Single vs Master
Discover the difference between single and master blocks. The single block is executed by only one thread, and master is always executed by the master thread.

14_omp_simple_lock.c - Simple Locks
Learn how to use OpenMP locks to synchronize threads accessing shared resources.

15_omp_nested_lock.c - Nested Locks
Explore nested locks, where one lock is acquired inside another lock. This can help you manage more complex thread synchronization scenarios.

16_omp_task_example.c - Basic Tasking
In this lesson, you'll explore how to create tasks in OpenMP, allowing threads to perform work asynchronously.

17_omp_taskwait_example.c - Task Synchronization
Learn how to use #pragma omp taskwait to wait for the completion of tasks before proceeding with further execution.

18_omp_taskgroup_example.c - Task Grouping
This lesson introduces the concept of task groups and how to synchronize multiple tasks using #pragma omp taskgroup.

19_omp_nested_parallel.c - Nested Parallelism
Learn how to create nested parallel regions to further divide workloads and optimize performance.

20_omp_performance_timer.c - Performance Timing
Use OpenMP's omp_get_wtime() to measure the performance of your parallel code and track execution times.
