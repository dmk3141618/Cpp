// 코드업 기초 100제 -  [기초-논리연산] 하나라도 참이면 참 출력하기
/*
문제 : 
두 가지의 참(1) 또는 거짓(0)이 입력될 때,

하나라도 참이면 참이 계산되는 프로그램을 작성해보자.

입력
1 또는 0의 값만 가지는 2개의 정수가 공백을 두고 입력된다.

출력
하나라도 참일 경우 1을 출력하고 이외의 경우에는 0을 출력한다.

입력 예시   
1 1

출력 예시
1
 */ 
 
#include<stdio.h>

int main(){
    int ia,ib;
    
    scanf("%d %d", &ia, &ib);
    printf("%d\n", ia||ib);
    
    return 0;
}
