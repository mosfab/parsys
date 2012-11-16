#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
     int id,i;
     omp_set_num_threads(4);
 
#pragma omp parallel for private(id)
     for (i = 0; i < 4; ++i)
     {
         id = omp_get_thread_num();
 
         printf("Hello World from thread %d\n", id);
#pragma omp barrier
         if (id == 0) {
             printf("There are %d threads\n", omp_get_num_threads());
         }
     }
 
     return EXIT_SUCCESS;
}

