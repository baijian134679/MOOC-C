#include <stdio.h>

int Perfect(int a);

int main()
{
	int m,n;
	int i;
	int count=0;
	
	scanf("%d %d",&n,&m);

	for(i=n;i<=m;i++){
		if(Perfect(i)==1){
			if(count!=0){  
                printf(" ");  
            }  
            printf("%d",i);  
            count++;  
        }  
    }  
    if(count==0){  
        printf("NIL");  
    }  
    printf("\n");  
	
	return 0;
}

int Perfect(int a)
{
	int u;
	int sum=0;
	
	for(u=1;u<a;u++){
		if(a%u==0){
			sum += u; 
		}
	}
	if(sum==u){
		return 1;
	}else{
		return 0;
	}
}
