// 코드업 기초 100제 -[기초-입출력] 년월일 입력받아 형태 바꿔 출력하기
/*
문제 : 
년월일을 출력하는 방법은 나라마다, 형식마다 조금씩 다르다.

날짜를 년월일(yyyy.mm.dd)의 형태로 입력받아,

일월년(dd-mm-yyyy)의 형태로 출력하는 프로그램을 작성해보자.

(단, 한 자리 일/월은 0을 붙여 두 자리로, 년도는 0을 붙여 네 자리로 출력한다.)

입력
년월일이 '.'(닷)으로 구분되어 입력된다.

출력
년월일을

일월년으로 바꾸어 '-'(대쉬, 마이너스)로 구분해 출력한다.
 */ 

#include<stdio.h>

int main(){
    int iy,im,id;
    scanf("%d.%d.%d",&iy,&im,&id);
    printf("%02d-%02d-%04d",id,im,iy);
    



    return 0;
}