//
//  main.c
//  FORZA_7주차_줄번호
//
//  Created by Chaemin Yu on 2023/01/01.
//  예전에 프개 과제로 사용됐던 if (엔터가 입력된 경우 \0였나?) 그때 배열에 넣기 뭐 이런식으로!
//  fgets 쓰면 입력받을떄 한줄 건너뛰고 받나? -> scanf에서 n을 입력하고 나서 한줄 건너뛸때 값까지 인식해버ㅎ림-> 해결책 :

#include <stdio.h>

int main() {
    int n, i;
    
    scanf("%d", &n);
    char list[n][60];
    
    getchar();
    
    for(i=0; i<n; i++){
        //scanf("%[^\n]%*c", list[i]);
        fgets(list[i], 60, stdin);
    }
    //printf("\n");
    for(i=0; i<n; i++){
        printf("%d. %s", i+1, list[i]);
    }
    
    return 0;
}
