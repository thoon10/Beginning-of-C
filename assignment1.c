#include <stdio.h>

int main()
{
	int S_Number;
	S_Number = 201501199;
	int a;
	int b;
	int c;
	int d;
	int e; // 각 점수를 int a~e로 지정

	a = 90;
	b = 84;
	c = 95;
	d = 100;
	e = 78; // 각 과목 점수

	int sum;

	sum = a + b + c + d + e; 
	float Ave; // 평균이 정수가 아니므로 float으로 선언
	Ave = sum / 5.0;

	printf("%d 님의 성적표는 아래와 같습니다.\n",S_Number);
	printf("-------------------\n");
	printf("과목1 : %d\n",a);
	printf("과목2 : %d\n",b);
	printf("과목3 : %d\n",c);
	printf("과목4 : %d\n",d);
	printf("과목5 : %d\n",e);
	printf("-------------------\n");
	printf("평균 : %.2f", Ave); //소수점 두자리까지 표현 .2f

	



	return 0;
}
