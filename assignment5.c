#include <stdio.h>
#pragma warning(disable:4996)

void P_divider(int N) {
    static int i = 2;
    static int count = 0;
    static int arr[50];
    // ��� �Լ��� ó���ϱ� ���ؼ� ���� ������ ȣ�� ������ �ʱ�ȭ �Ǹ� �ȵ�.

    if (N == 1) {
        if (count == 1) {
            printf("�Ҽ��Դϴ�.");
            return;

            //count�� 1�̶�� ���� �ڱ� �ڽŸ� ������ ���� �Ҽ��Դϴٸ� ���

        }
        else {
            int a = 1;
            for (int k = 0; k < count; k++) {
                a *= arr[k];
            }
            // a�� N�� �ٽ� ������ �ʴ� ����� �����غ��� (���� ����)

            printf("%d = ", a);

            for (int j = 0; j < count - 1; j++) {
                printf("%d*", arr[j]);
            }
            // *�� �ϳ� �� ������ �� �� ���ڸ� ��̿��� �ϳ� �� �����.
            printf("%d", arr[count - 1]);
            return;
            // �Ϸ��� �Լ� Ż��.

        }
    }

    if (N % i == 0) {
        arr[count] = i;
        count += 1;
        P_divider(N /= i);

        // ��� �Լ��� i�� ������ ������ ��� i�� ���� N������ �Լ� ȣ��.
    }
    else {
        i++;
        P_divider(N);
    }
    // ������ �������� �ʴ� ��������� i���� 1������ �ٽ� N���� �Լ� ȣ��.
}


int P_divider2(int n) {
    int i = 2;
    int arr[50];
    int m = n;


    int count = 0;


    while (i <= n) {
        if (n % i == 0) {
            arr[count] = i;
            count += 1;
            n /= i;

        }
        if (n % i != 0) {
            i++;
        }
    }


    if (count == 1) {
        printf("�Ҽ��Դϴ�.");
    }


    else {
        printf("%d = ", m);
        for (int i = 0; i < count - 1; i++) {
            printf("%d*", arr[i]);
        }
        printf("%d", arr[count - 1]);

    }
}
// ��� �Լ� �̿�� ��� Ƚ���� �������� ������ ���� ��찡 ������, �̷� �� while������ �ذ�����.



int main() {
    int N = 1;
    while (N <= 1) {
        printf("���� �Է� : ");
        scanf_s("%d", &N);

        if (N <= 1) {
            printf("2 �̻��� ���� �Է��ϼ���.\n");
        }
    }

    // �̷л��� ������ ������ ������ ���� ó���� �Է��� ���Ƶ�

    P_divider(N);

    return 0;
}
