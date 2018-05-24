#include <stdio.h>

int main()
{
	int s1,s2;
	int i;
	int cnt = 0;
	int number[101]={0};
//  用数组存放系数	
	while (cnt<2){
		scanf("%d %d", &s2, &s1);
		number[s2] += s1;
		if (s2 == 0){
			cnt ++;
		}
	}
//	遍历数组中不为0的次幂，并输出 
	for ( i=100; i > 1; i--) {
		if ( number[i] != 0 && number[i] !=1 && number[i] != -1 ) {
			cnt ++;
			if ( cnt==3 ){
				printf("%dx%d",number[i],i);
			}else {
				if( number[i] >0) {
					printf("+%dx%d",number[i],i);
				}else{
					printf("%dx%d",number[i],i);
				}
			}
		}else if (number[i] ==1 ){
			printf ("+x%d",i);
		}else if (number[i] ==-1){
			printf("-x%d",i);
		}
	}
//  输出次幂为1的系数
	if ( number[1] < -1 ) {
		printf("%dx",number[1]);
	}else if( number[1] >1 ){
		printf("+%dx",number[1]);
	}else if( number[1] == 1){
		printf("+x");
	}else if( number[1] == -1){
		printf("-x");
	}
//	输出0次幂的系数，不包括0次幂系数为0。且输出结果为0的情况	
	if ( number[0] <0 ){
		printf("%d\n", number[0]);
	}else if( number[0] >0 ){
		printf("+%d\n",number[0]);
	}else{
		printf("0");
	}
	return 0;
}
