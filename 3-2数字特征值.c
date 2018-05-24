#include <stdio.h>

int main()
{
	double m = 0.5;
	int n = 0;
	int count = 0;
	int y = 0;
	int number;
	
	scanf("%d", &number);
	while( number > 0 ){
		y = number%10;
		count ++;
		m*= 2;
	if( number%10%2 == count%2 ){
		n+= m;
	}
		number /= 10;
	}
	printf("%d",n);
 }
