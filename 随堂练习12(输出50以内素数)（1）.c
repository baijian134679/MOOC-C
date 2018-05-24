#include <stdio.h>

int main()
{
    int x,i;
	
    for(x=2; x<=50; x++)
    {
    	for (i=2; i<x; i++){
    		if(x%i==0){
    			break;
			}
		}
		if(x == i){
			printf("%d ",x);
		}
	}
	printf("\n");
	return 0;    
}
