#include <stdio.h>

int main(void)
{

	printf("int: %d\n", 1);
	printf("char: %d\n", 'a');
	printf("print integer:%d\n", 127);
	printf("%d+%d=%d\n\n", 5, 7, 5 + 7);
	printf("int% d, float% f, char% c, string % s\n\n", 1, 1.0f, '1', "1");

	printf("이름     국어     영어     수학    총점   평균\n");
	printf("===================================================\n");
	printf("%s    %d       %d       %d     %d   %f\n\n", "김길동", 80, 90, 80, 80 + 90 + 80, (80 + 90 + 80) / 3.f);

	printf("좌로정렬           %-10s%s\n", "hello", "world");
	printf("우로정렬           %10s%s\n", "hello", "world");
	printf("두글자만           %.2s%s\n", "hello", "world");
	printf("우로정렬+두글자만  %10.2s%s\n\n", "hello", "world");
	//일부 글자수 컷하고 싶을때 소수점 사용
	//정수만 쓰면 칸배정, 소수점 아래는 컷
	//ex) 10.2 = 해당 문자열에 10칸배정, 그러나 2글자만 나옴

	printf("lead zero test : %3d\n", 3);
	printf("lead zero test : %03d\n", 13); //숫자앞에 0이 3개 생김
	printf("lead zero test : %03.2d\n\n", 213); //0을 두개만 띄우고싶으면 소숫점 활용

	printf("abcdefg12345\r123\n\n");
	//\r = 커서를 줄 처음으로 이동
	//출력본 123 efg12345 = 123이 abcdefg12345 위에 덮어쓰기 됐다.
	//잘 사용 안함. 걍 알아만 두기

	printf("\\ 쌍따옴표를 문자로 취급하고 싶을때도 : \" \n\n");
	//파일경로 표시할떄도 \\ 2개씩 써줘야 제대로 출력된다.

	printf("int의 크기 : %d\n", sizeof(int));
	printf("float의 크기 : %d\n", sizeof(float));
	printf("char의 크기 : %d\n", sizeof(char));




	//0402
	//printf("%d,%d,%d,%d", 5,52,0,4);
	//printf("\n");
	//printf("%f,%f,%f,%f", 1.0, -0.100, 2., .5);
	//printf("\n");
	//printf("\n");
	//printf("Hello, world!\n");
	//printf("Hello, world!2\n");

	return 0;

}
