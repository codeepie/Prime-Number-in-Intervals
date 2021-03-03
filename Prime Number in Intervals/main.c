//
//  main.c
//  Prime Number in Intervals
//
//  Created by yogendra singh on 3/3/21.
//  Copyright © 2021 yadavboy. All rights reserved.
//

#include <stdio.h>

int main(){
    int flag , lower , upper;
    printf(" Enter Lower limit and upper limit as you want");
    scanf("%d %d",&lower,&upper);
    for (int i= lower+1; i<upper; i++) {
        flag=1;
        for (int j=2; j<i; j++) {
            if (i%j==0) {
                flag=0;
                break;
            }
        }
        
        if (flag==1) {
            printf("%d  " , i);
        }
    }
    
    
    
    return 0;
    
}
