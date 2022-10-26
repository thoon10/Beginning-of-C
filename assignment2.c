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


	printf("부장의 이름을 입력하세요 : ");
	scanf("%s", n1);
	getchar();
	printf("부장의 근무시간을 입력하세요 : ");
	scanf("%d", &h1);
	getchar();
	printf("\n");
	printf("사원의 이름을 입력하세요 : ");
	scanf("%s", n2);
	getchar();
	printf("사원의 근무시간을 입력하세요 : ");
	scanf("%d", &h2);




	printf("======================================\n");
	printf("%s 부장님의 월급은 %d원 입니다.\n", n1, A(Sal_A, h1, Tax_A));
	printf("%s 사원님의 월급은 %d원 입니다.\n", n2, A(Sal_B, h2, Tax_B));
	printf("======================================\n");
	printf("회사가 지불할 총 월급은 %d 원 입니다.", A(Sal_A, h1, Tax_A) + A(Sal_B, h2, Tax_B));

	return 0;


}