
## 🚀 OpenMP Programming Reference for Multithreading in C/C++

This repository contains essential statements and examples for using OpenMP in C/C++ for multi-threaded programming. It includes parallel regions, synchronization, locks, and tasking.

> **Compile with:**
> `gcc -fopenmp your_file.c -o your_program`

---

### 📌 1. Initialization & Environment

```c
#include <omp.h>

omp_get_num_threads();   // Total threads in team
omp_get_thread_num();    // Current thread ID
omp_get_max_threads();   // Max threads available
omp_set_num_threads(n);  // Set threads before parallel region
omp_get_wtime();         // Wall-clock time
```

---

### 🚀 2. Parallel Regions

```c
#pragma omp parallel               // Start parallel region
#pragma omp parallel num_threads(4)
#pragma omp parallel private(x)
#pragma omp parallel shared(x)
#pragma omp parallel firstprivate(x)
```

---

### 🔁 3. Work-Sharing Constructs

```c
#pragma omp for                   // Loop distribution
#pragma omp parallel for

#pragma omp sections              // Independent tasks
#pragma omp section

#pragma omp single                // One thread executes
#pragma omp master                // Only master thread executes
```

---

### 🧩 4. Synchronization

```c
#pragma omp barrier               // Wait for all threads
#pragma omp critical              // Mutual exclusion
#pragma omp atomic                // Atomic memory updates
#pragma omp ordered               // Enforce execution order
#pragma omp flush                 // Memory synchronization
```

---

### 🔐 5. Locking Mechanisms

#### Simple Lock

```c
omp_lock_t lock;

omp_init_lock(&lock);
omp_set_lock(&lock);
omp_unset_lock(&lock);
omp_destroy_lock(&lock);
```

#### Nested Lock

```c
omp_nest_lock_t nlock;

omp_init_nest_lock(&nlock);
omp_set_nest_lock(&nlock);
omp_unset_nest_lock(&nlock);
omp_destroy_nest_lock(&nlock);
```

---

### ⚖️ 6. Data Sharing Clauses

| Clause              | Description                     |
| ------------------- | ------------------------------- |
| `shared(var)`       | Shared among all threads        |
| `private(var)`      | Private to each thread          |
| `firstprivate(var)` | Private, but initialized        |
| `lastprivate(var)`  | Save result from last iteration |
| `default(shared)`   | All vars shared by default      |
| `default(none)`     | Must explicitly define sharing  |

---

### 🧮 7. Reductions

```c
#pragma omp parallel for reduction(+:sum)
```

Supports `+`, `-`, `*`, `&`, `|`, `^`, `min`, `max`

---

### 🧵 8. Tasks

```c
#pragma omp task                // Define asynchronous task
#pragma omp taskwait            // Wait for all tasks
#pragma omp taskgroup           // Group and wait
```

---

### ⚙️ 9. Runtime Control

```bash
export OMP_NUM_THREADS=4       # Set thread count
export OMP_SCHEDULE="dynamic"  # Set loop schedule policy
```

```c
omp_get_schedule();            // Query schedule
omp_set_schedule();            // Set schedule
```

---

### 📈 10. Performance Tips

* Prefer `atomic` over `critical` for lightweight operations.
* Avoid false sharing (padding, alignment).
* Use dynamic scheduling for load imbalance.
* Minimize lock contention and nested locks.
* Profile your code with tools like `perf`, `gprof`, Intel VTune.

---

### 📄 License

This guide is free to use and adapt. Contributions welcome!

---

Happy coding! 🧵💻
