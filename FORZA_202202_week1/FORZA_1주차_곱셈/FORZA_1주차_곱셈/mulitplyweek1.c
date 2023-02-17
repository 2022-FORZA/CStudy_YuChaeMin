//
//  main.c
//  FORZA_1주차_곱셈
//
//  Created by Chaemin Yu on 2022/09/21.
//

#include <stdio.h>

int main() {
    int num1, num2, one, ten, hund, num3, num4, num5, num6;
    
    printf("enter num1 : ");
    scanf("%d", &num1);
    printf("enter num2 : ");
    scanf("%d", &num2);
    
    hund = num2/100;
    ten = (num2 - hund*100)/10;
    one = (num2 - hund*100) - ten*10;
    
    num3 = num1*one;
    num4 = num1*ten;
    num5 = num1*hund;
    num6 = num1*num2;
    
    printf("\n%d\n%d\n%d\n%d\n", num3, num4, num5, num6);
    
    return 0;
}
