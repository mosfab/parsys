#include <stdio.h>

#define n 1000000000;
#define p 4


int main(){
	double sum = 0;
	int i;
	
	#pragma omp parallel for num_threads(4)
		for(i = 0; i<n; i++){
			sum +=i;
		}
	printf("%f\n", sum);
}



