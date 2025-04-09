#include <stdio.h>
#pragma warning (disable : 4996)

int main(void)
{
	int x;
	printf("날짜 입력. 1일은 월요일 > ");
	scanf("%d\n", &x);

	int range = 0;
	if(x >= 1 && x <= 31)
	{
		range = 1;
	}

	x %= 7; //x는 x나누기 7 했을때 나머지값. 순환
	// 0 또는 6이 주말

	if (range) 	
	{ 
		if (x == 0 || x == 6)
			// 0은 일요일, 6은 토요일
		{
			printf("주말\n");
			if (x == 0)
			{
				printf("일요일");
			}
			if (x == 6)
			{
				printf("토요일");
			}
		}
		if (!(x == 0 || x == 6))
			//부정 사용해서 위에서 해당안되는것 다 묶기
		{
			printf("주중\n");
		}
	}
	//if (!range)
	else
	{
		printf("잘못된 입력입니다.");
	}
}
