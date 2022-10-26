#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void sorting(int* parr) {
    int tem, i, j;
    //배열의 크기를 알기에 구하는 변수는 생략

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 9; j++) {
            if (*(parr + j) > *(parr + j + 1)) {
                tem = *(parr + j);
                *(parr + j) = *(parr + j + 1);
                *(parr + j + 1) = tem;
            }
        }
    }
}

int main() {
    int a, b, c, d, e, f, g, h, i, j, inNum;
    int* pa, * pb, * pc, * pd, * pe, * pf, * pg, * ph, * pi, * pj;
    // 변수 10개 생성



    pa = &a;
    pb = &b;
    pc = &c;
    pd = &d;
    pe = &e;
    pf = &f;
    pg = &g;
    ph = &h;
    pi = &i;
    pj = &j;


    printf("Input 10 numbers : ");
    scanf_s("%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
    // 변수에 값을 입력받음

    int arr[10] = { a,b,c,d,e,f,g,h,i,j };
    // 10개의 정수를 배열로 저장, 출력 대상 배열

    int* parr = arr;


    //int* parr = { &a,&b,&c,&d,&e,&f,&g,&h,&i,&j };
    //int* parr[10] = { pa, pb, pc, pd, pe, pf, pg, ph, pi, pj };
    // 10개의 정수값을 포인트로 가진 배열
    //포인터 배열을 정렬시 그 위치가 크기 순서.

    sorting(parr);

    //   printf("%d",*(parr+1));
    //   printf("%d",arr[1]);



    inNum = 1;
    while (inNum != 0) {
        printf("몇 번째로 큰 정수를 출력할까요?<종료=0>:");
        scanf_s("%d", &inNum);

        if (inNum != 0) {
            printf("%d 번째로 큰 수: %d\n", inNum, arr[10-inNum]);
        }
        // 0이 아닐 경우 출력해야 될 문구

        else {
            printf("프로그램이 종료되었습니다. 감사합니다.");
        }
        // 0일 경우 출력해야될 문구

    }


    return 0;
}
