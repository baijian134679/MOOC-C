#include <stdio.h>

int main()
{
	int x = 2;
	int cnt = 0;
	int m,n,sum=0;
	
	scanf("%d %d", &n, &m);

	while ( cnt < m ) {
		int i;
		int isPrime = 1;	
		for ( i=2; i<x; i++ ) {
			if ( x % i == 0 ) {
				isPrime = 0;
				break;
			}
		}
		if ( isPrime == 1 ) {
				cnt ++;
				if( m > n){
					if( cnt >= n ){
					sum += x;
				}	
			}else {
				sum = x;
			}	
		}	
			x++;
		} 
	printf("%d",sum);
	return 0;
}	

