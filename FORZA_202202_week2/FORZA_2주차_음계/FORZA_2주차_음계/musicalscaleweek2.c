//
//  main.c
//  FORZA_2주차_음계
//
//  Created by Chaemin Yu on 2022/09/29.
//

#include <stdio.h>

int main() {
    int scale[9], i, j, a=1, d=1;
    
    //step1: 음계 입력 받기
    printf("input musical scale : \n");
    for(i=0; i<8; i++){
        printf("scale %d : ", i+1);
        scanf("%d", &scale[i]);
    }
    
    //step2: ascending인지 판별하기
    //이렇게 쓰면 앞뒤 짝궁만 판단하게 되는딩
    /*for(j=0; j<8; j++){
        if(scale[j] < scale[j+1]){
            printf("ascending");
        }
        if(scale[j] > scale[j+1]){
            printf("descending");
        }
        else{
            printf("mixed");
        }
    }*/
    
    //이 방법으로 굳이 배열의 첫 값이 1이 아니더라도 판단할 수 있게 하고 싶ㅇ느데... 왜 자꾸 오류가 나는거지
    /*while(j < 8){
        if(scale[j] < scale[j+1]){
            d = 0;
        }
        else if(scale[j] > scale[j+1]){
            a = 0;
        }
        j++;
    }*/
    
    
    for(j=0; j<8; j++){
        if(j+1 == scale[j]){
            a = 0;
        }
        else if(j+1 == scale[7-j]){
            d = 0;
        }
        else{
            a = 2;
            d = 2;
        }
    }
    
    //a=0이 되는 경우
    if(a == 0){
        printf("ascending\n");
    }
    else if(d == 0){
        printf("descending\n"); //여기서 자꾸 오류남
    }
    else if((d == 2) && (a == 2)){
        printf("mixed\n");
    }
    
    return 0;
}
