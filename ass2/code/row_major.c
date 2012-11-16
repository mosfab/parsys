#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    
    int dim;
    dim = atoi(argv[1]);

    size_t i,j;

    clock_t start = clock();
    float matrix [dim][dim];

    for (i=0;i< dim; i++)
        for (j=0;j <dim;j++)
            matrix[i][j] = 0.01* i+j;

    printf ( "row_major execution time: %f\n", ( (double)clock() - start ) / CLOCKS_PER_SEC );

    return 0;
}
