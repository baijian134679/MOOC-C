#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
//   	char word[] = "Hello";
//   	char line[10] = "Hello";
//   	char *str = "Hello";
//    printf("%s\t%s\t%s\t",word,line,str);
//    printf("请分别输入升高""如输入\"5 7\"。"); 
//	char string[8];
//	scanf("%7s\n",string);
//	printf("%s\n",string);
	char s[]="Hello";
	char *p = strchr(s,'l');
	int o = 123456;
	char *a = &o;
	printf("%s",(char)o);
	char c = *p;
	*p = '\0';
//	char *t = (char*)malloc(strlen(p)+1);
	char *t = (char*)malloc(strlen(s)+1);
//	strcpy(t,p);
	strcpy(t,s);
	printf("%s\n",t);
	printf("%s\n",s);
	free(t);
	*p = c;
	printf("%s\n",s);
    return 0;    
}
