
#include <stdio.h>
#pragma warning(disable :4996)

int main(void)
{
	/*
	
	// int(����)�� float(�Ǽ�) ���� �����ڷ� ����ϱ�

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


	//scanf �̿��ؼ� ���� �����

	int x;
	scanf("%d", &x);
	printf("%d", x);


	printf("���ڸ� �ΰ� �Է��ϼ��� ex) 1 5\n");
	scanf("%d%d", &a, &b);
	printf("���  : %d", a + b);
	
	*/



	/*
	//�ǽ�) �� ������ �հ� ��� ���ϱ�
	int kor=0;
	int eng=0;
	int mat=0;
	
	// int kor, eng, mat , sum ; 
	// �ʱⰪ ���� ���ص� ��. ������ scanf���� �Է¹����Ŷ�.
	
	// float avg;
	//�Ҽ����� �ʿ��ϱ� ������ �÷�Ʈ

	printf("����, ����, ���� ������ �Է��ϼ���\n");
	scanf("%d%d%d", &kor, &eng, &mat);
	// ���â���� scanf �Է��Ҷ��� ������ ����! ���⼭ scanf %d�� 3����, ���â���� �Էµ� 3�� �ؾ���. ���͵� 3��.
	// �̰� ������ ������ ������ ���� �Է� �����ϵ��� ������ 3�� ������ �ص� ������. ����� ����.

	int sum = kor + eng + mat;
	float avg = sum / 3;
	printf("���� : %d�� \n", sum);
	printf("��� : %.1f \n ", avg);

	// printf("���� : %d , ��� : %.2f", sum,avg);
	// ���ٷ� �����ڸ� �̷���
	*/



	/*
	//��������� �׽�Ʈ
	int a = 10, b = 3;
	printf(" a + b : %d\n", a + b);
	printf(" a - b : %d\n", a - b);
	printf(" a * b : %d\n", a * b);
	printf(" a / b : %d\n", a / b);
	printf(" a ������ b : %d\n", a % b);

	*/

		

		//1��

		int que; //�Է°�
		int num1; //100���ڸ�
		int num2; //10���ڸ�
		int num3; //1���ڸ�

		printf("���ڸ� �� �Է� \n");
		scanf("%d",&que);
		
		num3 = que % 10 ;
		//10���� ������ �������� ���ؼ� 1���ڸ��� ����
		num2 = que / 10 % 10 ;
		//��=100�� 10�� �ڸ��� ����
		//�ٽ� ������ 10 �ؼ� 1�� �ڸ��� ����
		num1 = (que /100);
		//�Է°� ������ 100�ؼ� �� ����
	
		printf("%d,%d,%d ������ ���� %d \n\n", num1,num2,num3, num1+num2+num3);
			
		//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�

		//2�� 
	
		int second;
		int minute;
		int hour;
	
		printf("�� �Է��ϸ� ��,��,�ʷ� �ٲ��ݴϴ�\n");
		scanf("%d", &second);

		
		hour = (second / 3600 );
			//3600s = 1hour
		minute = (second % 3600 / 60);
			//hour�� ������ �޾Ҵµ� 60���� �� ������
		second = (second % 3600 % 60);
			//���� minute�� ������ �ް� ����
	

		printf("%d�� %d�� %d��", hour,minute,second);

		


		


}