//
//  main.c
//  FORZA_8주차_루트
//
//  Created by Chaemin Yu on 2023/01/11.
//

#include <stdio.h>
#include <math.h>

int main(){
    int A, B, N, i;
    while(1){
        scanf("%d %d", &B, &N);
        if((B == 0) && (N == 0)){
            break;
        }
        else{
            for(i =1; i<= 1000000; i++){
                
                if((pow(i,N) < B) && (B<pow(i+1, N))){
                    if((B - pow(i,N)) < (pow(i+1, N) - B)){
                        A = i;
                        printf("%d\n", A);
                        break;
                    }
                    else if((B - pow(i,N)) > (pow(i+1, N) - B)){
                        A = i+1;
                        printf("%d\n", A);
                        break;
                    }
                }
                
                else if(B == pow(i,N)){
                    A = i;
                    printf("%d\n", A);
                }
                else
                    continue;
            }
        }
    }
    return 0;
}
