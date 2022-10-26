#include <stdio.h>
#include <stdlib.h>

typedef struct student {
    char name[10];
    char ID[20];
    char phone[20];
    char address[10];

}STUDENT;

int main() {
    FILE* fp;
    int i = 0;
    STUDENT* pstudent = (STUDENT*)malloc(sizeof(STUDENT));
    //���� �Ҵ��� ���� ����ü ����

    fp = fopen("student.txt", "a+");
    //a+���� ���� ���� Ȥ�� ����


    if (fp != NULL) {
        printf("student.txt ������ �����Ͽ����ϴ�.\n");
    }


    int n = 0;
    while (1) {
        printf("���� �ɼ��� ������ �ּ���(1. ���� �Է�, 2. ��ü �л� ���, 3. ������) : ");
        scanf("%d", &n);
        getchar();
        //���� ���� �÷���

       
        if (n == 1) {
            fp = fopen("student.txt", "a+");

            printf("�̸� : ");
            scanf("%s", (pstudent+i)->name);
            //gets_s(student.name,sizeof(student.name));
            fputs((pstudent + i)->name, fp);
            fputs(" ", fp);
            printf("\n");


            printf("�й� : ");
            scanf("%s", (pstudent + i)->ID);
            //gets_s(student.ID, sizeof(student.ID));
            fputs((pstudent + i)->ID, fp);
            fputs(" ", fp);
            printf("\n");


            printf("��ȣ : ");
            scanf("%s", (pstudent + i)->phone);
            //gets_s(student.phone, sizeof(student.phone));
            fputs((pstudent + i)->phone, fp);
            fputs(" ", fp);
            printf("\n");


            printf("�ּ� : ");
            scanf("%s", (pstudent + i)->address);
            //gets_s(student.address, sizeof(student.address));
            fputs((pstudent + i)->address, fp);
            fputs("\n", fp);
            //������ ������ ����ü student�� �׸�鿡 ������ txt�� ���(��Ͻ� ���� Ȥ�� \n�� ����)


            printf("\n");



            fclose(fp);
            // �Էµ� ������� ���Ͽ� ����


            i++;
            //���� ������ �Ѱ���
            pstudent = (STUDENT*)realloc(pstudent, sizeof(STUDENT)*(i+1));
            // �޸� Ȯ��

        }

        else if (n == 2) {
            FILE* fpc;
            fpc = fopen("student.txt", "r");
            
            fseek(fpc, 0, SEEK_END);
            int chk = ftell(fpc);
            //���� �� ���� ���� üŷ

            int j = 0;
            STUDENT* prt = (STUDENT*)malloc(sizeof(STUDENT));
            //���� �� �ڷ� ����� ����ü ������ �Ҵ�

            if (chk == 0) {
                printf("�����Ͱ� �����ϴ�.\n");
                //chk�� 0�� ��� �����Ͱ� ���� ���̽����� �˸�.
                fclose(fpc);
                //üŷ�� fpc Ŭ����

            }

            else {
                fp = fopen("student.txt", "r");
                while(fscanf(fp, "%s%s%s%s", (prt + j)->name, (prt + j)->ID, (prt + j)->phone, (prt + j)->address) != EOF){

                    printf("�̸� : %s\n", (prt + j)->name);
                    printf("�й� : %s\n", (prt + j)->ID);
                    printf("��ȣ : %s\n", (prt + j)->phone);
                    printf("�ּ� : %s\n", (prt + j)->address);

                    j++;
                    prt = (STUDENT*)realloc(prt, sizeof(STUDENT) * (j + 1));
                    //������ �ڷᰡ ��� �Ϸ�� �� �޸� Ȯ��


                }
                fclose(fp);
                // �бⰡ �������� close
            }
        }


        else if (n == 3) {
            printf("�л� ������ ����˴ϴ�.\n");
            break;

        }

        else {
            printf("�ٽ� �Է��ϼ���.\n");
            // �ٸ� ��ɾ� �Է� ����
        }

    }

    return 0;
}
