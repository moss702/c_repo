#include <stdio.h>
#pragma warning (disable : 4996)

int main(void)
{
	int x;
	printf("��¥ �Է�. 1���� ������ > ");
	scanf("%d\n", &x);

	int range = 0;
	if(x >= 1 && x <= 31)
	{
		range = 1;
	}

	x %= 7; //x�� x������ 7 ������ ��������. ��ȯ
	// 0 �Ǵ� 6�� �ָ�

	if (range) 	
	{ 
		if (x == 0 || x == 6)
			// 0�� �Ͽ���, 6�� �����
		{
			printf("�ָ�\n");
			if (x == 0)
			{
				printf("�Ͽ���");
			}
			if (x == 6)
			{
				printf("�����");
			}
		}
		if (!(x == 0 || x == 6))
			//���� ����ؼ� ������ �ش�ȵǴ°� �� ����
		{
			printf("����\n");
		}
	}
	//if (!range)
	else
	{
		printf("�߸��� �Է��Դϴ�.");
	}
}
