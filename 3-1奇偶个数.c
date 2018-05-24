#include <stdio.h>

int main()
{
	int number = 0;
	int even = 0;
	int odd = 0;

	do {
		scanf("%d", &number);
		if ( number == -1 ){
			break;
		}
			
		if( number%2 == 0){
			even ++;
		}else{
			odd ++;
		}
//		printf("even= %d, odd=%d \n", even, odd);
		
	} while( number != -1);
	printf("%d %d", odd, even);

	return 0;
}
