#include <stdio.h>

#define n 1000000000


int main(int argc, char *argv[]){
        //double sum = 0;
        int p = atoi(argv[1]);
	unsigned long long s[(p-1)*64+1];
	s[0] = 0;
	s[64] = 0;
        #pragma omp parallel for num_threads(p) 
                for(unsigned long long i = 1; i<=n; i++){
                        s[omp_get_thread_num()*64] +=i;
                }
        printf("%llu\n", s[0]);
        printf("%llu\n", s[1*64]);
        printf("%llu\n", s[0]+s[1*64]);
}

