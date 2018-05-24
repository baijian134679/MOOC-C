#include <stdio.h>

int prime(int number);

int main()
{   
	int number;
	int i=2;
	scanf("%d",&number);
	
	if (prime(number)==1){
		printf("%d=%d",number,number);
	}else{
		printf("%d=",number);
		while(number/i>0){
			if(number!=i){
				if(number%i==0&&prime(i)==1){
					printf("%dx",i);
					number /= i;
				}else{
					i ++;
				}	
			}else{
				break;
			}
		}
		printf("%d",i);
	}
 	return 0;
}

int prime(int number){

	int i;
	int isPrime = 1;
		
	for ( i=2; i<number; i++ ) {
		if ( number % i == 0 ) {
			isPrime = 0;
			break;
		}
	}
	if ( isPrime == 1 ) {
		return 1;
	}else{
		return 0;
	}
}
