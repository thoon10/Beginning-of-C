#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 


int Add(int a, int b) {

	return a + b;
}

int Sub(int a, int b) {

	return a - b;
}

int Mul(int a, int b) {

	return a * b;
}

float Div(int a, int b) {

	return (float)a / b;
}

int Fac(int a) {
	if (a == 1 || a == 0) {
		return 1;
	}
	else {

		return a * Fac(a - 1);

	}
}




int main() {

	char oper = '!';

	while (oper != 'q') {
		printf("�����ڸ� �Է��ϼ���. : ");
		scanf_s("%c", &oper);

		if (oper == '+') {

			int a, b;

			printf("�� ���ڸ� �Է��ϼ���. (value1 value 2) : ");
			scanf_s("%d%d", &a, &b);

			printf("����� : %d\n", Add(a, b));
			getchar();

		}

		else if (oper == '-') {

			int a, b;

			printf("�� ���ڸ� �Է��ϼ���. (value1 value 2) : ");
			scanf_s("%d%d", &a, &b);

			printf("����� : %d\n", Sub(a, b));
			getchar();

		}

		else if (oper == '*') {

			int a, b;

			printf("�� ���ڸ� �Է��ϼ���. (value1 value 2) : ");
			scanf_s("%d%d", &a, &b);

			printf("����� : %d\n", Mul(a, b));
			getchar();

		}

		else if (oper == '/') {

			int a, b;
			b = 0;
			

			while (b == 0) {
				printf("�� ���ڸ� �Է��ϼ���. (value1 value 2) : ");
				scanf_s("%d%d", &a, &b);

				if (b == 0) {
				printf("0���δ� ���� �� �����.\n");
			}
			}
			
			printf("����� : %f\n", Div(a, b));
			getchar();

		}

		else if (oper == '!') {

			int a;

			a = -1;

			while (a<0) {
				printf("���ڸ� �Է��ϼ���. (value1) : ");
				scanf_s("%d", &a);

				if (a < 0) {
					printf("0�̻��� ���� �Է��ϼ���.\n");
				}



			} 


			printf("����� : %d\n", Fac(a));
			getchar();


		}

		else if (oper == 'q') {
			break;
		}




		else {
			printf("�����ڸ� �߸� �Է��Ͽ����ϴ�.\n");
			getchar();
		}


	}










}