#include <stdio.h>

int main()
{
	int S_Number;
	S_Number = 201501199;
	int a;
	int b;
	int c;
	int d;
	int e; // �� ������ int a~e�� ����

	a = 90;
	b = 84;
	c = 95;
	d = 100;
	e = 78; // �� ���� ����

	int sum;

	sum = a + b + c + d + e; 
	float Ave; // ����� ������ �ƴϹǷ� float���� ����
	Ave = sum / 5.0;

	printf("%d ���� ����ǥ�� �Ʒ��� �����ϴ�.\n",S_Number);
	printf("-------------------\n");
	printf("����1 : %d\n",a);
	printf("����2 : %d\n",b);
	printf("����3 : %d\n",c);
	printf("����4 : %d\n",d);
	printf("����5 : %d\n",e);
	printf("-------------------\n");
	printf("��� : %.2f", Ave); //�Ҽ��� ���ڸ����� ǥ�� .2f

	



	return 0;
}
