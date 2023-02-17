//
//  main.c
//  FORZA_7주차_벌집
//
//  Created by Chaemin Yu on 2022/12/31.
//

#include <stdio.h>

int main() {
    int n, a = 2, b = 5, count=2;
    
    scanf("%d", &n);
    
    while(1){
        if(n==1){
            printf("%d", 1);
            return 0;
        }
        
        if((a<= n) && (n<= a+b)){
            printf("%d", count);
            break;
        }
        a = a+b+1;
        b += 6;
        count++;
    }

}
