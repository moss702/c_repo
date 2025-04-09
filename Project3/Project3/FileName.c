#include <stdio.h>
#pragma warning(disable: 4996)

int main(void)
{

	/*
	//글자 하나를 입력 > 그 값이 영문자인지 여부를 확인
	//var, scanf
	char ch;

	printf("글자를 하나 입력하세요 >");
	scanf("%c", &ch);

	printf("%c\n", ch);
	//입력한 그대로 출력 (a)
	printf("%d\n\n", ch);
	//아스키숫자로 출력 (a=97)
	
	printf("%d\n", ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z');
	//아스키 A~Z에 포함되어야 함. 또는 a~z에 포함되어야 한다
	*/

	/*
	printf("%c", 5 > 10 ? 'A' : 'B');
	//5가 10보다 큰가? 거짓 : B 가 출력됨
	//1항이 문자면 참거짓도 문자. 숫자면  숫자타입으로 출력
	*/


	/*
	int x = 10;
	x += 5;
	x = x + 5;
	x = x % 7;
	//7로 나누고 나머지를 x에 할당
	// x %= 7 ; 로 복합대입연산자를 사용해도 된다.

	
	x++;
	//먼저 값을 주고 x가 증가함
	++x;
	//x가 먼저 증가하고 값을 줌

	printf("x : %d");

	*/


	// 슷자 3개의 평균 구하기
	// 정수 a,b,c를 실수 avg.
	int a, b, c;
	printf("숫자 세 개를 공백을 구분하여 입력 > ");
	scanf("%d %d %d", &a, &b, &c);
	float avg = (float)(a + b + c) / 3.f;
	//(float)a : abc를 실수형으로 형변환. :  a.0,  b.0,  c.0 이 되었다!
	//float avg 라는 실수형 변수선언. 실수형인 abc의 평균을 구한다.
	printf("%f", avg);


	
	

	return 0;
}