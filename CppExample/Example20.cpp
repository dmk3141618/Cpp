// 코드업 기초 100제 - [기초-입출력] 실수 한 개 입력받아 부분별로 출력하기
/*
문제 : 
실수 한 개를 입력받는다.

입력 받은 실수를 정수 부분과 실수 부분으로 나누어 따로 출력한다.

입력
실수 한 개가 입력된다.
(단, 입력 값은 절댓값이 정수부가 100,000을 넘지 않으며, 소수점 이하는 0으로 시작하지 않으며, 6자리이하이다.)

출력
첫 번째 줄에 정수 부분을,

두 번째 줄에 실수 부분을 입력된 자릿수만큼 그대로 출력한다.
 */ 

#include<stdio.h>

int main(){
    int ia,ib;
    
    scanf("%d.%d", &ia,&ib);
    printf("%d\n%d", ia,ib);

    return 0;
}