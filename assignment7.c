#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    char q[5] = "quit";


    while (1) {
        printf("������ �Է��ϼ���. > ");
        gets(s);
        //scanf�� ����ϸ� ������ ���޴� ������ ����.
        if (strcmp(s, q) == 0) {
            break;
        }
        // quit�� ���Ͽ� ������ �극��ũ.

        char* p;

        if (strchr(s, ',')) {
            p = strtok(s, ",");
            //p�� s���� "," �������� Ʈ������
            char q[100];
            //������ q �Ҵ�
            strcpy(q, p);
            //�߶��� �κ��� q�� �Ҵ�
            p = strtok(NULL, ",");
            //������ �κ��� �ٽ� p�� �Ҵ�
            strcat(p, ",");
            //���� , �߰�
            strcat(p, q);
            //�ϼ��� p�� q �߰�
        }

        else if (strchr(s, '.')) {
            p = strtok(s, ".");
            // p�� s���� "." �������� Ʈ������
            char q[100];
            // ������ q �Ҵ�
            strcpy(q, p);
            //q�� p�� ���� �Ҵ�
            strcat(q, ".\n");
            // ���� .�� ���๮�� �߰�
            p = strtok(NULL, ".");
            // . ���� �κ��� p�� �Ҵ�
            strcat(q, p);
            //q�� p�� ������
            p = q;
            // �ϼ��� q�� p�� �Ҵ�.


        }
        else {
            p = s;
            //"."�̳� ","�� ���� ���̽��� �״�� ���
        }

        printf("�������\n%s\n", p);


    }



    return 0;
}
