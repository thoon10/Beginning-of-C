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
		printf("연산자를 입력하세요. : ");
		scanf_s("%c", &oper);

		if (oper == '+') {

			int a, b;

			printf("두 숫자를 입력하세요. (value1 value 2) : ");
			scanf_s("%d%d", &a, &b);

			printf("결과값 : %d\n", Add(a, b));
			getchar();

		}

		else if (oper == '-') {

			int a, b;

			printf("두 숫자를 입력하세요. (value1 value 2) : ");
			scanf_s("%d%d", &a, &b);

			printf("결과값 : %d\n", Sub(a, b));
			getchar();

		}

		else if (oper == '*') {

			int a, b;

			printf("두 숫자를 입력하세요. (value1 value 2) : ");
			scanf_s("%d%d", &a, &b);

			printf("결과값 : %d\n", Mul(a, b));
			getchar();

		}

		else if (oper == '/') {

			int a, b;
			b = 0;
			

			while (b == 0) {
				printf("두 숫자를 입력하세요. (value1 value 2) : ");
				scanf_s("%d%d", &a, &b);

				if (b == 0) {
				printf("0으로는 나눌 수 없어요.\n");
			}
			}
			
			printf("결과값 : %f\n", Div(a, b));
			getchar();

		}

		else if (oper == '!') {

			int a;

			a = -1;

			while (a<0) {
				printf("숫자를 입력하세요. (value1) : ");
				scanf_s("%d", &a);

				if (a < 0) {
					printf("0이상의 수를 입력하세요.\n");
				}



			} 


			printf("결과값 : %d\n", Fac(a));
			getchar();


		}

		else if (oper == 'q') {
			break;
		}




		else {
			printf("연산자를 잘못 입력하였습니다.\n");
			getchar();
		}


	}










}