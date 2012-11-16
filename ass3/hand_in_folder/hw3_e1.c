#include <stdio.h>

#define n 1000000000

int main(){
	unsigned long long sum = 0;
	int i;
		for(i = 0; i<=n; i++){
			sum +=i;
		}
	printf("%llu\n", sum);
}



