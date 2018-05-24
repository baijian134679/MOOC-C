#include <stdio.h>

int main(){    
	   int a=5,b=6,c=7,MAX,MIN; 
 
    MAX = a>b ? a : b ;
    MAX = MAX>c ? MAX : c ;
 
    MIN = a<b ? a : b ;
    MIN = MAX<c ? MIN : c ;
    printf("max=%d min=%d",MAX,MIN); 
 
	 return 0;
}
