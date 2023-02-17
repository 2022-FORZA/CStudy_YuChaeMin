//
//  main.c
//  FORZA_7주차_윔블던
//
//  Created by Chaemin Yu on 2022/12/31.
//

#include <stdio.h>

int main() {
    int total, diff, win, lose;
    
    scanf("%d %d", &total, &diff);
    
    if(total < diff)
        printf("%d", -1);
    else{
        if((total - diff) %2 ==0){
            win = (total + diff)/2;
            lose = total - win;
            printf("%d %d", win, lose);
        }
        else
            printf("%d", -1);
    }
    
    return 0;
}
