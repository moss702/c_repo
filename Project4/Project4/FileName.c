#include <stdio.h>
#pragma warning(disable: 4996)

int main(void)
{
	// 1문
	// 숫자의 부호를 판단 ("양수", "음수", "0")
	// 프린트안에서 계산해서 맞는걸 바로 출력하는것도 방법
	int que;

	printf("1번 문제 : 숫자 하나 입력하면 양수/음수/0을 알려줍니다 > ");

	scanf("%d", &que);

	printf("%d는 %s입니다.\n\n", que, que == 0 ? "0" : (que < 0 ? "음수" : "양수"));
	//printf 한문장에서 전부 해결해서 음수 양수 문자열 출력함
	//que는 0인가? 참 : zero
	//que는 0인가? 거짓 : //que는 0 미만인가? 참 : 마이너스 , 거짓 : 플러스

	/* 쌤 피드백
	* int num = -5; 
	* printf("%s\n", num > 0 ? "양수" : num < 0 ? "음수" : "0")
	* 음수 양수 0이기 때문에 string 들어가줘야 한다.
	* 먼저 양음수 구분부터 잘 되는지 확인해보고, "양수" : "음수"
	* 괄호를 따로 안넣어도 되는군. 어차피 대기한다.
	*/

	//----------------------------------------------------------------------------------

	// 2문- 변수 하나로 ()&&() 조건문 ? 참 : 거짓
	// 정수의 값을 기준으로 3의 배수이면서 5의 배수인지 판단
	//3과 5로 나누기했을때 나머지가 생기는가 생기지않는가 여부를 봐야하나


	int que2;

	printf("2번 문제 : 수를 입력하면 3의 배수이자 5의 배수인지 알려줍니다 > ");
	scanf("%d", &que2);
	printf("%d는 3의 배수이자 5의 배수가 ", que2);

	int three = que2 % 3;
	int fiv = que2 % 5;


	//printf("%d",thr <= 1, 3의 배수임?


	printf(three > 0 ? "아니다\n\n" : "맞다\n\n" && fiv > 0 ? "아니다\n\n" : "맞다\n\n");
	//3으로 나눳을때 나머지가 생기는가 ? ㅇㅇ:3의배수가 아님 /ㄴㄴ:3의 배수임

	/*쌤 피드백
	* int num = 5; 
	* printf("%s\n", num > 0 ? "양수" : num < 0 ? "음수" : "0")
	* num % 3 == 0 < 3의 배수
	* num % 5 == 0 < 5의 배수
	* (%s, num % 3 == 0 && num % 5 == 0 ? "3의 배수이면서 5의배수 부합" : "3의 배수이면서 5의 배수 부적합");
	*/

	//----------------------------------------------------------------------------------

	// 3문 a,b,c (a > b && a>c) ? a : (b > a && b > c b:c)
	// 정수 세개를 기준으로 최대값 출력

	int a1;
	int a2;
	int a3;

	printf("3번 문제 : 숫자 3개를 입력하세요 > ");
	scanf("%d %d %d", &a1, &a2, &a3);

	int b1; //3개의 숫자 중 제일 큰 것

	b1 = (a1 > a2 ? a1 : (a1 > a3 ? a1 : a3) && a2 > a3 ? a2 : a3);
	//어떤 숫자가 가장 큰지 확인

	printf("정수 %d, %d, %d 중 제일 큰 숫자는 ", a1, a2, a3);

	printf("%d입니다.\n", b1);

	//----------------------------------------------------------------------------------

	//4문
	// 두개의 정수의 차이를 항상 양수로 표현
	// ex) 10 30 >>> 20       // 30 10 >>> 20

	int a; //입력군
	int b; //입력군
	int c; //a와 b의 차이

	printf("\n4번 문제 : 숫자 a b 입력하면 두 수의 차이를 알려줍니다 > ");
	scanf("%d %d", &a, &b);

	c = a - b;
	c < 0 ? (c = c * -1) : c;
	//a가 b보다 작을때 음수 기호가 뜬다.. 어떻게 빼지
	//c가 음수일때는 c를 두번 더해버릴까.. 이건 아닐듯.. 근데 일단 걍 출력해보자
	//c = c < 0 ? (c + c + c) : c;
	//음수를 양수로 바꾸는 가장 쉬운 방법은 -1을 곱해주는 것.

	printf("a와 b의 차이는 %d 입니다\n", c);

	//----------------------------------------------------------------------------------

	// 5문
	// 두 변수의 값을 교환


	int c1 = 11;
	int c2 = 22;

	printf("\n5번 문제 : %d와 %d의 값 교환하기 \n", c1, c2);
	// 11, 22

	int box = c1;

	c1 = c2;
	//그럼 c2는 c1의 값을 어디서 언제 가져오는디..
	//그래서 c1을 담아둘 박스를 하나 만들엇어요.. 그냥 넣었다 빼는거라 이건 아닌거같긴함
	c2 = box;

	printf("%d와 %d의 값 교환됐습니다\n\n", c1, c2);

	//근데 이게 맞다네요!?

}