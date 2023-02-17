#include <stdio.h>

int main() {
    int hourNow, minNow, minCook, endHour, endMin, nMin, nHour;
    
    scanf("%d %d", &hourNow, &minNow);
    printf("\n");
    if (!((hourNow >=0) && (hourNow<=23) && (minNow >= 0) && (minNow <= 59))){
        return 1;
    }
    
    scanf("%d", &minCook);

    nMin = (minNow + minCook) % 60;
    endMin = (minNow + minCook) - 60*nMin;

    nHour = hourNow % 24;
    endHour = hourNow - nHour;
    
    printf("%d %d", endHour, endMin);
    
    return 0;
}
