#include<stdio.h>

int main(void)
{
	//int score = 76;
	////임의 지정
	//char grade;

	//// *조건
	//// 90이상 A , 80이상 B, 나머지는 F
	//// 90~100 A , 80 ~89 B, 0~79 F

	//if (score >= 90) {
	//	grade = 'A';
	//}
	//else // 90 미만
	//{ 
	//	if (score >= 80)
	//	{
	//		grade = 'B';
	//	}
	//	else
	//	{
	//		grade = 'F';
	//	}
	//}
	//
	//printf("\n점수 : %d, 학점 : %c", score, grade);
	

	//현재의 반복문을 기반으로 1부터 100까지의 짝수의 합 구하기
	
	int i = 1, n, sum = 0;
	n = 100;
	while (i <= n) //100이 될때까지 반복
	{
		if (i % 2 == 0) //짝수일때
		{
			sum += i;
			
			printf("1부터 %d까지의 짝수의 합계는 %d\n", n, sum);
		}
		i++;
	}	

	//영 대문자를 가로 출력

	i = 'A';
	while (i <= 'Z')
	{
		printf("%c",i++);
	}

}