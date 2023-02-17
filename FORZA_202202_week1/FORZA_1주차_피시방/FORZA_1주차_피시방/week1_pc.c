//
//  main.c
//  FORZA_1주차_피시방
//
//  Created by Chaemin Yu on 2022/09/19.
//
//배열에 자기가 앉고 싶은 곳
//배열 칸이 이미 occupied 되어 있으면 거절

#include <stdio.h>

int main() {
    int N, seat[101], refuse=0, i, j, cust=0;
    scanf("%d", &N);
    
    for(i=0; cust<N; i++){
        scanf("%d", &seat[i]);
        cust += 1;
        for(j=0; j<i; j++){
            if(seat[i] == seat[j]){
                i--;
                refuse += 1;
            }
        }
    }

    printf("%d", refuse);

    return 0;
}
