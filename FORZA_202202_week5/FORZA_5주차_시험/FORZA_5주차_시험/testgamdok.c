//
//  백준 13458번
// numPart = A, chongPart = B, booPart = C
// numPart은 각각 시험장에 있는 응시자의 수임
// 각 시험장에 총감독관은 1명, 부감독관은 여러명 있어도 됨
// 필요한 감독관 수의 최솟값을 구하는 것
//

#include <stdio.h>

int main() {
    int N, B, C, numPart[1000000], chongPart=0, booPart=0, i, total;
    printf("input number of test rooms : ");
    scanf("%d", &N);
    
    for(i=0; i<N; i++){
        printf("input number of students in each room : ");
        scanf("%d", &numPart[i]);
    }
    
    printf("input number of B and C : ");
    scanf("%d %d", &B, &C);

    chongPart = N;
    for(i=0; i<N; i++){
        booPart = (numPart[i] - B)%C;
        booPart += booPart;
    }
    
    total = chongPart + booPart;
    printf("%d", total);
    
    return 0;
}
