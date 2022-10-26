#include <stdio.h>
#pragma warning(disable:4996)

void P_divider(int N) {
    static int i = 2;
    static int count = 0;
    static int arr[50];
    // 재귀 함수로 처리하기 위해선 위의 값들이 호출 때마다 초기화 되면 안됨.

    if (N == 1) {
        if (count == 1) {
            printf("소수입니다.");
            return;

            //count가 1이라는 것은 자기 자신만 나눠진 경우라 소수입니다를 출력

        }
        else {
            int a = 1;
            for (int k = 0; k < count; k++) {
                a *= arr[k];
            }
            // a로 N을 다시 구하지 않는 방법을 생각해보자 (개선 사항)

            printf("%d = ", a);

            for (int j = 0; j < count - 1; j++) {
                printf("%d*", arr[j]);
            }
            // *이 하나 덜 찍히게 한 후 숫자만 어레이에서 하나 더 찍어줌.
            printf("%d", arr[count - 1]);
            return;
            // 완료후 함수 탈출.

        }
    }

    if (N % i == 0) {
        arr[count] = i;
        count += 1;
        P_divider(N /= i);

        // 재귀 함수로 i로 나누어 떨어질 경우 i로 나눈 N값으로 함수 호출.
    }
    else {
        i++;
        P_divider(N);
    }
    // 나누어 떨어지지 않는 경우임으로 i값만 1증가후 다시 N으로 함수 호출.
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
        printf("소수입니다.");
    }


    else {
        printf("%d = ", m);
        for (int i = 0; i < count - 1; i++) {
            printf("%d*", arr[i]);
        }
        printf("%d", arr[count - 1]);

    }
}
// 재귀 함수 이용시 재귀 횟수가 많아지면 에러가 나는 경우가 있으니, 이럴 떈 while문으로 해결하자.



int main() {
    int N = 1;
    while (N <= 1) {
        printf("정수 입력 : ");
        scanf_s("%d", &N);

        if (N <= 1) {
            printf("2 이상의 수를 입력하세요.\n");
        }
    }

    // 이론상은 음수도 가능은 하지만 예외 처리로 입력을 막아둠

    P_divider(N);

    return 0;
}
