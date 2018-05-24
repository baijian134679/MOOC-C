#include <stdio.h>

int main()
{    
	int a,b;
	int i;
	int c;
	
	scanf("%d/%d",&a,&b);
	printf("0.");
	for(i=0;i<200;i++){
		c = a*10 / b;
		a = a*10%b;
		printf("%d",c);
		if(a%b==0){
			break;
		}
	}
	printf("\n");
 	return 0;
}
