#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void sorting(int* parr) {
    int tem, i, j;
    //�迭�� ũ�⸦ �˱⿡ ���ϴ� ������ ����

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
    // ���� 10�� ����



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
    // ������ ���� �Է¹���

    int arr[10] = { a,b,c,d,e,f,g,h,i,j };
    // 10���� ������ �迭�� ����, ��� ��� �迭

    int* parr = arr;


    //int* parr = { &a,&b,&c,&d,&e,&f,&g,&h,&i,&j };
    //int* parr[10] = { pa, pb, pc, pd, pe, pf, pg, ph, pi, pj };
    // 10���� �������� ����Ʈ�� ���� �迭
    //������ �迭�� ���Ľ� �� ��ġ�� ũ�� ����.

    sorting(parr);

    //   printf("%d",*(parr+1));
    //   printf("%d",arr[1]);



    inNum = 1;
    while (inNum != 0) {
        printf("�� ��°�� ū ������ ����ұ��?<����=0>:");
        scanf_s("%d", &inNum);

        if (inNum != 0) {
            printf("%d ��°�� ū ��: %d\n", inNum, arr[10-inNum]);
        }
        // 0�� �ƴ� ��� ����ؾ� �� ����

        else {
            printf("���α׷��� ����Ǿ����ϴ�. �����մϴ�.");
        }
        // 0�� ��� ����ؾߵ� ����

    }


    return 0;
}
