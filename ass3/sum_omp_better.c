#include <stdio.h>

#define N 1000000000


int main(){
	unsigned long long s=0;
        #pragma omp parallel for reduction(+:s) 
                for(unsigned long long i = 1; i<=N; i++){
                        s+=i;
                }
        printf("%llu\n", s);
	printf("((1000000000 + 1)*1000000000)/2 = 500000000500000000\n");
	printf("http://www.wolframalpha.com/input/?i=%28%281000000000+%2B+1%29*1000000000%29%2F2\n");
}

