#include <stdio.h>

int main(void)
{

	printf("int: %d\n", 1);
	printf("char: %d\n", 'a');
	printf("print integer:%d\n", 127);
	printf("%d+%d=%d\n\n", 5, 7, 5 + 7);
	printf("int% d, float% f, char% c, string % s\n\n", 1, 1.0f, '1', "1");

	printf("�̸�     ����     ����     ����    ����   ���\n");
	printf("===================================================\n");
	printf("%s    %d       %d       %d     %d   %f\n\n", "��浿", 80, 90, 80, 80 + 90 + 80, (80 + 90 + 80) / 3.f);

	printf("�·�����           %-10s%s\n", "hello", "world");
	printf("�������           %10s%s\n", "hello", "world");
	printf("�α��ڸ�           %.2s%s\n", "hello", "world");
	printf("�������+�α��ڸ�  %10.2s%s\n\n", "hello", "world");
	//�Ϻ� ���ڼ� ���ϰ� ������ �Ҽ��� ���
	//������ ���� ĭ����, �Ҽ��� �Ʒ��� ��
	//ex) 10.2 = �ش� ���ڿ��� 10ĭ����, �׷��� 2���ڸ� ����

	printf("lead zero test : %3d\n", 3);
	printf("lead zero test : %03d\n", 13); //���ھտ� 0�� 3�� ����
	printf("lead zero test : %03.2d\n\n", 213); //0�� �ΰ��� ��������� �Ҽ��� Ȱ��

	printf("abcdefg12345\r123\n\n");
	//\r = Ŀ���� �� ó������ �̵�
	//��º� 123 efg12345 = 123�� abcdefg12345 ���� ����� �ƴ�.
	//�� ��� ����. �� �˾Ƹ� �α�

	printf("\\ �ֵ���ǥ�� ���ڷ� ����ϰ� �������� : \" \n\n");
	//���ϰ�� ǥ���ҋ��� \\ 2���� ����� ����� ��µȴ�.

	printf("int�� ũ�� : %d\n", sizeof(int));
	printf("float�� ũ�� : %d\n", sizeof(float));
	printf("char�� ũ�� : %d\n", sizeof(char));




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
