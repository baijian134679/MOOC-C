#include <stdio.h>

int main()
{	
	int i,j;
	int isSP = 0;
	int n;
	int Max=0,Min=0;
	scanf("%d", &n);
	int A[n][n];
	int B[2][n];
	
// �������
	for ( i=0; i<n; i++ ){
		for ( j=0; j<n; j++ ){
			if(j<n-1){
				scanf("%d ", &A[i][j]);
			}else {
				scanf("%d",&A[i][j]);
			}
		}
	} 
////	
//	printf("A�����飺\n");
//	for ( i=0; i<n; i++ ){
//		for ( j=0; j<n; j++ ){
//			printf("%d\t",A[i][j]);
//		}
//		printf("\n");
//	}
////	
	 
//  �Ƚϸ��е����������¼��[0][i] �� 
	for ( i=0; i<n; i++){
		for ( j=0; j<n; j++){
			if (Max-A[i][j] >= 0){
				B[0][i] = Max;
			}else{
				Max = A[i][j];
				B[0][i] = Max;
			}
		}
		Max = 0;
	}
	
//  �Ƚϸ��е���С������¼��[1][j]�� 
	for ( j=0; j<n; j++){
		for ( i=0; i<n; i++){
			if(i==0){Min = A[i][j];}
			if(Min-A[i][j] <=0 ){
				B[1][j] = Min; 
			}else{
				Min = A[i][j];
				B[1][j] = Min;
			}
		}
		Min = 0;
	}

////
//	printf("B����ֵ��\n"); 
//	for ( i=0; i<2; i++ ){
//		for ( j=0; j<n; j++ ){
//			printf("%d\t",B[i][j]);
//		}
//		printf("\n");
//	}
////	
	 	
//  �Ƚ�B�������������飬������������[i,j]�����û�����NO��
	for ( i=0; i<n; i++){
		for ( j=0; j<n; j++ ){
			if( B[0][i] == B[1][j]){
				printf("%d %d\n",i,j);
				isSP = 1;
				break;
			}
		}
		if(isSP==1){break;}
	}
	if(isSP == 0){
		printf("NO\n");
	}
	return 0;
}
