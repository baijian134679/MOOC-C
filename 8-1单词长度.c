#include <stdio.h>
#include <string.h>

int main ()
{
	char s[12];
	int i,a;
	
	while(1){
		scanf("%s",s);
		i = strlen(s);
		char *p=strrchr(s,'.');
		if(p==NULL){
			printf("%d ",i);
		}
		else {
			i -= 1;
			if(i==0){
				break;
			}
			printf("%d\n",i);
			break;
		}
		
	}
	
	return 0; 
}
