#include <stdio.h>
#include <stdlib.h>

typedef struct _IntLinked {
    int num;
    struct _IntLinked* next;

}IntLinked;

//typedef�� ����ϸ� struct _IntLinked ��� IntLinked�� �ٿ���.

void addNode(IntLinked** head, int num) {
    IntLinked* il = (IntLinked*)malloc(sizeof(IntLinked));
    // �� ��� il�� ����
    il->num = num;
    // ���� ����
    il->next = NULL;
    // �⺻������ ���� �ڿ� ��带 �߰���. ���� next���� ����
    if (*head == NULL) {
        *head = il;
        //��尡 null�̸� il�� ��尡 ��
    }
    else {
        IntLinked* pList = *head;
        while (pList->next != NULL) {
            pList = pList->next;
            //pList�� next���� NULL�� ������ while������ pList�� ���� �ٲ���
        }
        pList->next = il;
        //pList�� next�� NULL������, ���� ������ ��带 �ǹ���. �� �������� �� il�� ����.
    }

}




int main() {
    IntLinked* head = NULL;

    int n;

    printf("������ ����Ʈ�� ���� �Է� : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int num;
        printf("������ �Է��ϼ��� : ");
        scanf("%d", &num);
        //num�� �ӽ÷� ����
        IntLinked* il = (IntLinked*)malloc(sizeof(IntLinked));
        // �� ��� il�� ����
        il->num = num;
        // ���� ����
        il->next = NULL;
        // �⺻������ ���� �ڿ� ��带 �߰���. ���� next���� ����
        if (head == NULL) {
            head = il;
        }
        // head�� null�̸� il�� �Ҵ�
        else {
            IntLinked* pList = head;
            //head�� null�� �ƴ� ���
            while (1) {
                if (pList->next == NULL) {
                    //pList�� ���� ������ ����� ���.
                    pList->next = il;
                    //pList�� ������ ��带 il�� �Ҵ�.
                    break;
                }
                pList = pList->next;
                //pList�� ���� ������ ��带 ����Ű�� ����.
            }

        }
    }



    IntLinked* temp = head;
    while (temp != NULL) {
        printf("����� ���� : %d\n", temp->num);
        temp = temp->next;
    }
    // ������ �ڵ�

    return 0;


}
