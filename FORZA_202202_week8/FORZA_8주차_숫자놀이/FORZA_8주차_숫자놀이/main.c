//
//  main.c
//  FORZA_8주차_숫자놀이
//
//  Created by Chaemin Yu on 2023/02/01.
//
// 입력 받는 숫자 N, 근데 얘가 몇자리수인지 모르는데 어떻게 계산하노...
// for 문 돌려서 몇자리수인지 알아내는게 어떨꽙! get the digit -> 아 몇자리 수인지 모르니까 while 문으로...?


#include <stdio.h>
#include <stdlib.h>

int getTens(int digit){
    int j, tens=1;
    for(j=digit; j>1;j--){
        tens = tens*10;
    }
    return tens;
}

int getDigit(int N){
    int digit=1;
    while(1){
        if(N/10 > 10){
            digit++;
            N = N/10;
        }
        else if(N/10 == 10){
            digit++;
            N = N/10;
        }
        else if(N/10 < 10){
            digit++;
            break;
        }
    }
    return digit;
}

int getNextN(int N, int digit, int tens){
    int nums, i, total=1;
    for(i=0; i<digit; i++){
        nums = N/tens;
        N = N - nums*tens;
        total = total*nums;
        tens = tens/10;
    }
    return total;
}

int main(){
    int N, digit, tens, total=1;
    while(1){
        scanf("%d", &N);
        if(N==0)
            break;
        while(1){
            if(N == 0){
                printf("%d ", N);
                break;
            }
            else if(N<10){
                printf("%d ", N);
                break;
            }
            else{
                printf("%d ", N);
                digit = getDigit(N);
                tens = getTens(digit);
                total = getNextN(N, digit, tens);
                tens = tens/10;
                N = total;
                continue;
                

            }
            return 0;
        }
    }

}
