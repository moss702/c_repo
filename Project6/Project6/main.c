#include<stdio.h>

int main(void)
{
	//int score = 76;
	////���� ����
	//char grade;

	//// *����
	//// 90�̻� A , 80�̻� B, �������� F
	//// 90~100 A , 80 ~89 B, 0~79 F

	//if (score >= 90) {
	//	grade = 'A';
	//}
	//else // 90 �̸�
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
	//printf("\n���� : %d, ���� : %c", score, grade);
	

	//������ �ݺ����� ������� 1���� 100������ ¦���� �� ���ϱ�
	
	int i = 1, n, sum = 0;
	n = 100;
	while (i <= n) //100�� �ɶ����� �ݺ�
	{
		if (i % 2 == 0) //¦���϶�
		{
			sum += i;
			
			printf("1���� %d������ ¦���� �հ�� %d\n", n, sum);
		}
		i++;
	}	

	//�� �빮�ڸ� ���� ���

	i = 'A';
	while (i <= 'Z')
	{
		printf("%c",i++);
	}

}