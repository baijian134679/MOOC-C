#include <stdio.h>

int main()
{
	int x1,x2;
	int y1,y2;
	int ret;
	
	scanf("%d/%d",&x1,&x2);
	if(x1>0 && x2>0 ){
		y1 = x1%x2;
		y2 = x2%x1;
		if(x1==x2){
			printf("1/1");
		}else if(x1>x2){
			if( x1%x2==0 && x2/x1==0){
				ret = x1/x2;
				printf("%d/1", ret);
			}else if( x1%y1 == 0 && x2%y1==0){
				x1 /= y1;
				x2 /= y1;
				printf("%d/%d", x1,x2);
			}else if( x1%y1 >0 && x2%y1 >0){
				printf("%d/%d", x1,x2);
			}
		}else if(x2>x1){
			if( x2%x1==0 && x1/x2==0){
				ret = x2/x1;
				printf("1/%d", ret);
			}else if( x1%y2 == 0 && x2%y2==0){
				x1 /= y2;
				x2 /= y2;
				printf("%d/%d", x1,x2);
			}else if( x1%y2 >0 && x2%y2 >0){
				printf("%d/%d", x1,x2);
			}
		}
	}
	return 0;
}


