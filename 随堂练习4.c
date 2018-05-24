#include <stdio.h>
#include <math.h>

int isPrime(int x, int knowPrimes[], int numberOfKnownPrimes)
{
	int ret = 1;
	int i;
	if ( x == 1 || 
		(x%2 == 0 && x!=2 ))
		ret = 0;
	for ( i=3; i<sqrt(x); i+=2 ){
		if ( x % i == 0 ){
			ret = 0;
			break;
		}
	}
	return ret;
}
int main(void)
{
	const int number = 100;
	int prime[number] = {2};
	int count = 1;
	int i = 3;
	while ( count < number) {
		if ( isPrime(i, prime,count) ){
			prime[count++] = i;
		}
		i++;
	}
	for ( i=0; i<number; i++ ) {
		printf("%d", prime[i]);
		if ( (i+1)%5 ) printf("\t");
		else printf("\n");
	}
	}
	return 0;
}

