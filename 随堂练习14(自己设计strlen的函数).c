#include <stdio.h>
#include <string.h>

size_t mylen( const char*x){
	int idx = 0;
	while(x[idx] != '\0'){
		idx ++;
	}
	return idx;
}
int main()
{
//	int ch;
//	while ((ch = getchar())!=EOF){
//		putchar(ch);
//	}
//	printf("EOF\n");
	char line[]="Hello";
	printf("strlen=%lu\n",mylen(line));
	printf("sizeof=%lu\n",sizeof(line));
	return 0;
}
