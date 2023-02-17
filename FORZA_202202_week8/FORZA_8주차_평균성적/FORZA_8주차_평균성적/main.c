//
//  main.c
//  FORZA_8주차_평균성적
//
//  Created by Chaemin Yu on 2023/01/04.
//

#include <stdio.h>

int main() {
    int c, i, j;
    int n, hiAvg=0, sum=0; //hiAvg는 평균을 넘는 학생의 수
    double result, avg=0; //n은 학생 수 -> n명의 점수들을 입력받아야함
    
    scanf("%d", &c);
    
    for(i=0; i<c; i++){
        scanf("%d", &n);
        
        //이중배열각이다!
        int stu[n]; //이중배열까진 필요 없을지도...
        for(j=0; j<n; j++){
            scanf("%d", &stu[j]);
            sum += stu[j];
        }
    
        //이제 평균을 구해야됨
        avg = (double) sum/n;
        
        //평균을 넘기는 인원 수를 구해야함
        for(j=0; j<n; j++){
            if(stu[j] > avg)
                hiAvg ++;
        }
        result = ((double) hiAvg/n) * 100;
        printf("%.3f%%\n", result);

    }
    
    return 0;
}
