
#include <stdio.h>
#pragma warning(disable :4996)

int main(void)
{
	/*
	
	// int(정수)와 float(실수) 형식 지정자로 산술하기

	int age = 20;
	float height = 173.5f, weight = 65.4f;

	printf("age : %d\n", age);
	printf("height : %.1f\n", height);
	printf("weight : %.1f\n\n", weight);

	
	int a = 5, b = 10;
	int x = a + b;



	printf(" a + b - 1 = %d\n", x = -1);
	printf("( a + b ) * 2 = %d\n", x * 2);
	printf("( a + b ) + 5 = %d\n\n", x + 5);


	//scanf 이용해서 덧셈 만들기

	int x;
	scanf("%d", &x);
	printf("%d", x);


	printf("숫자를 두개 입력하세요 ex) 1 5\n");
	scanf("%d%d", &a, &b);
	printf("결과  : %d", a + b);
	
	*/



	/*
	//실습) 각 과목의 합과 평균 구하기
	int kor=0;
	int eng=0;
	int mat=0;
	
	// int kor, eng, mat , sum ; 
	// 초기값 지정 안해도 됨. 어차피 scanf에서 입력받을거라서.
	
	// float avg;
	//소수점이 필요하기 때문에 플로트

	printf("국어, 영어, 수학 점수를 입력하세요\n");
	scanf("%d%d%d", &kor, &eng, &mat);
	// 출력창에서 scanf 입력할때는 무조건 엔터! 여기서 scanf %d가 3개라서, 출력창에서 입력도 3번 해야함. 엔터도 3번.
	// 이게 싫으면 과목의 점수를 각각 입력 가능하도록 질문을 3번 나눠서 해도 괜찮다. 방식의 차이.

	int sum = kor + eng + mat;
	float avg = sum / 3;
	printf("총점 : %d점 \n", sum);
	printf("평균 : %.1f \n ", avg);

	// printf("총점 : %d , 평균 : %.2f", sum,avg);
	// 한줄로 줄이자면 이렇게
	*/



	/*
	//산술연산자 테스트
	int a = 10, b = 3;
	printf(" a + b : %d\n", a + b);
	printf(" a - b : %d\n", a - b);
	printf(" a * b : %d\n", a * b);
	printf(" a / b : %d\n", a / b);
	printf(" a 나누기 b : %d\n", a % b);

	*/

		

		//1문

		int que; //입력값
		int num1; //100의자리
		int num2; //10의자리
		int num3; //1의자리

		printf("세자리 수 입력 \n");
		scanf("%d",&que);
		
		num3 = que % 10 ;
		//10으로 나누고 나머지만 구해서 1의자리만 남김
		num2 = que / 10 % 10 ;
		//몫=100과 10의 자리만 남김
		//다시 나누기 10 해서 1의 자리만 남김
		num1 = (que /100);
		//입력값 나누기 100해서 몫만 남김
	
		printf("%d,%d,%d 각각의 합은 %d \n\n", num1,num2,num3, num1+num2+num3);
			
		//ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ

		//2문 
	
		int second;
		int minute;
		int hour;
	
		printf("초 입력하면 시,분,초로 바꿔줍니다\n");
		scanf("%d", &second);

		
		hour = (second / 3600 );
			//3600s = 1hour
		minute = (second % 3600 / 60);
			//hour의 나머지 받았는데 60으로 또 나누고
		second = (second % 3600 % 60);
			//이제 minute의 나머지 받고 끝내
	

		printf("%d시 %d분 %d초", hour,minute,second);

		


		


}