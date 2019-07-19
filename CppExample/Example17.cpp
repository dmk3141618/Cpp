// 코드업 기초 100제 -[기초-입출력] 주민번호 입력받아 형태 바꿔 출력하기
/*
문제 : 
주민등록번호는 다음과 같이 구성된다.

XXXXXX-XXXXXXX

앞의 6자리는 생년월일(yymmdd)이고 뒤 7자리는 성별, 지역, 오류검출코드이다.

주민등록번호를 입력받아 형태를 바꿔 출력해보자.

입력
주민등록번호 앞 6자리와 뒤 7자리가 "-"로 구분되어 입력된다.

출력
"-"를 제외한 주민번호 13자리를 모두 붙여 출력한다.

입력 예시   
980907-1121112

출력 예시
9809071121112 
 */ 

#include<stdio.h>

int main(){
    int iFirst,iSecond;
    scanf("%d-%d",&iFirst, &iSecond);
    printf("%06d%07d",iFirst,iSecond);

    return 0;
}