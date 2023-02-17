//
//  main.c
//  FORZA_1주차_생장점
//
//  Created by Chaemin Yu on 2022/09/19.
//

#include <stdio.h>

int branch(int age){
    int i, split, cut, leaf=1;
    for(i=1; i<=age; i++){
        printf("year %d split is : ", i);
        scanf("%d", &split);
        printf("year %d cut is : ", i);
        scanf("%d", &cut);
        
        leaf = leaf * split - cut;
    }
    
    return leaf;
}

int main() {
    int age, finalLeaf, trees[101]={0, }, x, y, numTree=0;
    
    //마지막 줄에 0을 입력하면 프로그램이 끝나고 결과값을 출력하는걸로 보아 while-break를 사용해야한다고 판단했음.
    //다만 한꺼번에 받고 한꺼번에 출력하는 식이라서 배열을 사용하려고 했는데 사용자가 몇 개를 입력할지 모를 뿐더러 출력 시 배열 전체를 출력하면 의미없는 값도 같이 출력됨
    
    while (1){
        printf("enter tree's age : ");
        scanf("%d", &age);

        finalLeaf = branch(age);
        
        x = numTree;
        trees[x] = finalLeaf;
        numTree ++;

        if(age ==0){
            trees[x] = 0;
            break;
        }

    }
    
    for(y=0; y<sizeof(trees)/sizeof(int); y++){
        if(trees[y] != 0){
            printf("number of leaves are : %d\n", trees[y]);
        }
        
    }

    return 0;
}
