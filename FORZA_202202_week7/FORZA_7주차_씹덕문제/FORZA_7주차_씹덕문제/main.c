//
//  main.c
//  FORZA_7주차_씹덕문제
//
//  Created by Chaemin Yu on 2022/12/31.
//  배운것: char형 이중포인터 활용법, char형 배열에 문장을 집어넣고 싶으면 ㄱ=ㄴ 형식이 아닌 strcpy를 써야한다는것! variable은 최대한 적게 선언해서 코드를 짧게 써야한다는것~

#include <stdio.h>
#include <string.h>

int main() {
    int t, i, j,n, ganScore=0, sauScore=0;
    int gandolf[]= {1,2,3,3,4,10}, sauron[]={1,2,2,2,3,5,10};
    
    scanf("%d", &t);
    char battle[t][50];
    
    for(i=0; i<t; i++){
        for(j=0, ganScore=0; j<6; j++){
            scanf("%d", &n);
            ganScore += gandolf[j]*n;
        }
        for(j=0, sauScore=0; j<7; j++){
            scanf("%d", &n);
            sauScore += sauron[j]*n;
        }
  
        if(ganScore>sauScore)
            strcpy(battle[i], "Good triumphs over Evil");
        else if(ganScore<sauScore)
            strcpy(battle[i], "Evil eradicates all trace of Good");
        else if(ganScore == sauScore)
            strcpy(battle[i], "No victor on this battle field");
    }
    for(i=0; i<t; i++){
        printf("Battle %d: %s\n", i+1, battle[i]);
    }

    
    return 0;
}
