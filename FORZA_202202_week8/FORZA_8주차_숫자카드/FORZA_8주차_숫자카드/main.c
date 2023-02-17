//
//  main.c
//  FORZA_8주차_숫자카드
//
//  Created by Chaemin Yu on 2023/01/04.
//

#include <stdio.h>
#include <math.h>

int main() {
    int s, n=1; //n은 n자리수 인걸 알아내기 위해
    
    while(1){
        scanf("%d", &s);
        
        if(s%10<10)
            printf("%d", s);
        
        while(1){
            if(s%(int)(pow(10,n)) < 10)
                break;
            else
                n++;
        }
        n += 1;
        
        //이제 자리수가 n이라는 것을 알게 되었음
        
    }
    
    return 0;
}
