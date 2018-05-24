#include <stdio.h>

int main()
{
	int a[]={12,13,15,};
	const int *p = a;
	p = 12;
	printf("p[0]=%d\ta[0]=%d",p[0],a[0]);

	return 0;
}

