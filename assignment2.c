#include <stdio.h>
#pragma warning(disable:4996)
#define A(a,b,c)  (a*b*(100-c))/100
#define Tax_A 12
#define Tax_B 9
#define Sal_A 9200
#define Sal_B 6300


int main() {

	int a, b, h1, h2;


	char n1[10];
	char n2[10];


	printf("������ �̸��� �Է��ϼ��� : ");
	scanf("%s", n1);
	getchar();
	printf("������ �ٹ��ð��� �Է��ϼ��� : ");
	scanf("%d", &h1);
	getchar();
	printf("\n");
	printf("����� �̸��� �Է��ϼ��� : ");
	scanf("%s", n2);
	getchar();
	printf("����� �ٹ��ð��� �Է��ϼ��� : ");
	scanf("%d", &h2);




	printf("======================================\n");
	printf("%s ������� ������ %d�� �Դϴ�.\n", n1, A(Sal_A, h1, Tax_A));
	printf("%s ������� ������ %d�� �Դϴ�.\n", n2, A(Sal_B, h2, Tax_B));
	printf("======================================\n");
	printf("ȸ�簡 ������ �� ������ %d �� �Դϴ�.", A(Sal_A, h1, Tax_A) + A(Sal_B, h2, Tax_B));

	return 0;


}