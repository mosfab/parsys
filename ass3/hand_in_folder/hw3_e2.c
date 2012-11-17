#include <stdio.h>

#define n 1000000000


int main(int argc, char *argv[]){
        //double sum = 0;
        int p = atoi(argv[1]);
	unsigned long long s[p];
	for(int i = 0; i < p; i++){
		s[i] = 0;
	}
        #pragma omp parallel for num_threads(p) 
                for(unsigned long long i = 1; i<=n; i++){
                        s[omp_get_thread_num()] +=i;
                }
        //printf("%llu\n", s[0]);
        //printf("%llu\n", s[1*64]);
        //printf("%llu\n", s[0]+s[1*64]);
	unsigned long long sum = 0;
	for(int i = 0; i < p; i++){
		sum +=  s[i];
	}
        printf("%llu\n", sum);
}


