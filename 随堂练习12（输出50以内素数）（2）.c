#include <stdio.h>

int main()
{
    int x,i;
	
    for(x=2; x<50; x++)
    {
    	int isPrime = 1;
    	for (i=2; i<x; i++){
    		if(x%i==0){
    			isPrime = 0;
    			break;
			}
		}
		if(isPrime == 1){
			printf("%d ",x);
		}
	}
	printf("\n");
	return 0;    
}
