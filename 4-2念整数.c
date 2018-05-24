#include <stdio.h>

int main()
{
	int x,type;
	int mask = 1;
	
	scanf("%d", &x);
	
	if (x < 0){
		printf("fu ");
		x = -x;
	} 
	int t = x;
	while( t > 9){
		t /=10;
		mask *= 10;
	}
		do{
			type = x / mask;
			switch(type){
				case 1:
					printf("yi");break;
				case 2:
					printf("er");break;
				case 3:
					printf("san");break;
				case 4:
					printf("si");break;			
				case 5:
					printf("wu");break;			
				case 6:
					printf("liu");break;			
				case 7:
					printf("qi");break;			
				case 8:
					printf("ba");break;			
				case 9:
					printf("jiu");break;
				case 0:
					printf("ling");break;											
			}
		if (mask > 9){
			printf(" ");
		}
		x %= mask;
		mask /=10;
	}while( mask > 0);
	
	printf("\n");
	return 0;	
}
