#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int r( char s[]);
int main(void)
{
	int hh,mm,ss;
	char s[120];
	char s1[] = "$GPRMC";
	char s2[] = "END";
	int i=0,cnt=0;

	do{
		gets(s);
		if(strncmp(s,s1,6)==0 && r(s) == 1){
			cnt ++;
			sscanf(s, "$GPRMC,%2d %2d %2d",&hh, &mm, &ss);
		}
	}while(strcmp(s,s2)!=0);
	hh +=8 ;
	if(hh>=24) hh -= 24;
	if(cnt >0)
	printf("%02d:%02d:%02d\n", hh, mm, ss);
	
	return 0;	
}
//文本校验函数 
int r( char s[])
{
	int k,XOR;
	char a[2];
	int a1;
	
	XOR = s[1]^s[2];
	for (k=3; k<120;k++){
		if(s[k]=='*'){
			a[0]=s[k+1];
			a[1]=s[k+2];
			break;
		}
		if(s[k]==','){
			continue;
		}
		XOR = XOR^s[k];
	}
	XOR %= 65536;
	sscanf(a,"%x",&a1);
		if(a1==XOR){
			return 1;
		}else{
			return 0;
		}
}
