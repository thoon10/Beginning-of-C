#include <stdio.h>
#include <stdlib.h>

typedef struct _IntLinked {
    int num;
    struct _IntLinked* next;

}IntLinked;

//typedef을 사용하면 struct _IntLinked 대신 IntLinked로 줄여줌.

void addNode(IntLinked** head, int num) {
    IntLinked* il = (IntLinked*)malloc(sizeof(IntLinked));
    // 새 노드 il을 생성
    il->num = num;
    // 숫자 저장
    il->next = NULL;
    // 기본적으로 제일 뒤에 노드를 추가함. 따라서 next값은 없음
    if (*head == NULL) {
        *head = il;
        //헤드가 null이면 il이 헤드가 됨
    }
    else {
        IntLinked* pList = *head;
        while (pList->next != NULL) {
            pList = pList->next;
            //pList의 next값이 NULL일 때까지 while문으로 pList의 값을 바꿔줌
        }
        pList->next = il;
        //pList의 next가 NULL임으로, 제일 마지막 노드를 의미함. 그 마지막에 새 il을 연결.
    }

}




int main() {
    IntLinked* head = NULL;

    int n;

    printf("생성할 리스트의 개수 입력 : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int num;
        printf("정수를 입력하세요 : ");
        scanf("%d", &num);
        //num을 임시로 저장
        IntLinked* il = (IntLinked*)malloc(sizeof(IntLinked));
        // 새 노드 il을 생성
        il->num = num;
        // 숫자 저장
        il->next = NULL;
        // 기본적으로 제일 뒤에 노드를 추가함. 따라서 next값은 없음
        if (head == NULL) {
            head = il;
        }
        // head가 null이면 il을 할당
        else {
            IntLinked* pList = head;
            //head가 null이 아닐 경우
            while (1) {
                if (pList->next == NULL) {
                    //pList가 제일 마지막 노드일 경우.
                    pList->next = il;
                    //pList의 다음번 노드를 il로 할당.
                    break;
                }
                pList = pList->next;
                //pList가 제일 마지막 노드를 가리키게 해줌.
            }

        }
    }



    IntLinked* temp = head;
    while (temp != NULL) {
        printf("저장된 정수 : %d\n", temp->num);
        temp = temp->next;
    }
    // 프린팅 코드

    return 0;


}
