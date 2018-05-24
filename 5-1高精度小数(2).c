//
//  main.c
//  c yuyan
//
//  Created by anzhongyin on 2016/11/29.
//  Copyright ? 2016Äê anzhongyin. All rights reserved.
//
 
#include <stdio.h>
#include <math.h>
 
int main(int argc, const char * argv[]) {
    // insert code here...
    // TODO Auto-generated method stub
    int a,b,i;
    int quotient=0;
     
    scanf("%d/%d",&a,&b);
    if (a<b&&a>0) {
        printf("0.");
    }
    for (i=0; i<200; i++) {
        if(a*10>=b)
        {
            quotient=a*10/b;
            a=a*10%b;
            printf("%d",quotient);
        }
        else
        {
            a=a*10;
            printf("0");
        }
        if(a%b==0)
        {
             
            break;
             
        }
    }
    printf("\n");
    return 0;
 }
  
