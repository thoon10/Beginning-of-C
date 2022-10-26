#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    char q[5] = "quit";


    while (1) {
        printf("문장을 입력하세요. > ");
        gets(s);
        //scanf를 사용하면 공백을 못받는 문제가 있음.
        if (strcmp(s, q) == 0) {
            break;
        }
        // quit랑 비교하여 같으면 브레이크.

        char* p;

        if (strchr(s, ',')) {
            p = strtok(s, ",");
            //p에 s에서 "," 전까지를 트림해줌
            char q[100];
            //임의의 q 할당
            strcpy(q, p);
            //잘라진 부분을 q에 할당
            p = strtok(NULL, ",");
            //나머지 부분을 다시 p에 할당
            strcat(p, ",");
            //빠진 , 추가
            strcat(p, q);
            //완성된 p에 q 추가
        }

        else if (strchr(s, '.')) {
            p = strtok(s, ".");
            // p에 s에서 "." 전까지를 트림해줌
            char q[100];
            // 임의의 q 할당
            strcpy(q, p);
            //q에 p의 값을 할당
            strcat(q, ".\n");
            // 빠진 .과 개행문자 추가
            p = strtok(NULL, ".");
            // . 다음 부분을 p에 할당
            strcat(q, p);
            //q와 p를 묶어줌
            p = q;
            // 완성된 q를 p에 할당.


        }
        else {
            p = s;
            //"."이나 ","가 없는 케이스는 그대로 출력
        }

        printf("결과문장\n%s\n", p);


    }



    return 0;
}
