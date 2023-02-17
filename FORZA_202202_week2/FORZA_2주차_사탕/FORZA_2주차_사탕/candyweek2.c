//
//  main.c
//  FORZA_2주차_사탕
//
//  Created by Chaemin Yu on 2022/09/24.
//
//T = numCase, N = numStu

#include <stdio.h>

int main() {
    int numCase, numStu, i, j;
    long long totalCandy=0, numCandy;
    
    printf("enter number of cases : ");
    scanf("%d", &numCase);
    printf("\n\n");
    
    for(i=1; i<= numCase; i++){
        printf("enter number of students : ");
        scanf("%d", &numStu);
        
        for(j=1;j<= numStu; j++){
            printf("enter number of candy that student brought : ");
            scanf("%lld", &numCandy);
            totalCandy += numCandy;
        }
        if(totalCandy%numStu == 0){
            printf("YES\n\n");
        }
        else{
            printf("NO\n\n");
        }
    }
    return 0;
}
