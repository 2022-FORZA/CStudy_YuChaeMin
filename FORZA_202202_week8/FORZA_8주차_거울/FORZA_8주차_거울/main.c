//
//  main.c
//  FORZA_8주차_거울
//
//  Created by Chaemin Yu on 2023/01/11.
//

#include <stdio.h>
#include <string.h>

int main() {
    char list[90], stop[5]= "***\n";
    int len, i;
    
    while(1){
        
        //scanf("%s", list);
        fgets(list, 90, stdin);
        /*for(i=0; i<90; i++){
            printf("%c", list[i]);
        }*/
        
        //getchar();
        if(strcmp(stop, list) == 0){ //비교할떄 맨뒤에 저장되는 \n이 같이 비교가 안되게끔 써보기
            break;
        }
        
        len = (int)strlen(list) -1;
        //int result = strcmp(stop, list);
        
        //printf("%d\n", len); //문자열 길이가 5로 잘 나와줌
        
        char cpy_list[90] = {0};
        
        for(i = len-1; i >= 0 ; i--){ //len-1칸 부터 (e = list[4])
            cpy_list[(len-1) - i] = list[i];
        }
        //printf("%s\n", cpy_list);
        for(i =0 ; i<len; i++){
            printf("%c", cpy_list[i]);
        }
        printf("\n");
    }

    return 0;
}
