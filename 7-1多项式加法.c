#include <stdio.h>

int main()
{
	int s1,s2;
	int i;
	int cnt = 0;
	int number[101]={0};
//  ��������ϵ��	
	while (cnt<2){
		scanf("%d %d", &s2, &s1);
		number[s2] += s1;
		if (s2 == 0){
			cnt ++;
		}
	}
//	���������в�Ϊ0�Ĵ��ݣ������ 
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
//  �������Ϊ1��ϵ��
	if ( number[1] < -1 ) {
		printf("%dx",number[1]);
	}else if( number[1] >1 ){
		printf("+%dx",number[1]);
	}else if( number[1] == 1){
		printf("+x");
	}else if( number[1] == -1){
		printf("-x");
	}
//	���0���ݵ�ϵ����������0����ϵ��Ϊ0����������Ϊ0�����	
	if ( number[0] <0 ){
		printf("%d\n", number[0]);
	}else if( number[0] >0 ){
		printf("+%d\n",number[0]);
	}else{
		printf("0");
	}
	return 0;
}
