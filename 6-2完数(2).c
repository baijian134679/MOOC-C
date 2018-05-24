#include <stdio.h>

int test_number(int number){  
    int i,sum=0;  
    for(i=1;i<number;i++){  
        if(number%i==0){  
            sum+=i;  
        }  
    }  
    if(sum==number){  
        return 1;  
    }else{  
        return 0;  
    }  
}  
  
int main(){  
    int m,n,i,count=0;  
  
    scanf("%d %d",&n,&m);  
    for(i=n;i<=m;i++){  
        if(test_number(i)==1){  
            if(count!=0){  
                printf(" ");  
            }  
            printf("%d",i);  
            count++;  
        }  
    }  
    if(count==0){  
        printf("NIL");  
    }  
    printf("\n");  
    return 0;  
}  
