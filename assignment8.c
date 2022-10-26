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
    //동적 할당을 통한 구조체 선언

    fp = fopen("student.txt", "a+");
    //a+모드로 파일 생성 혹은 리드


    if (fp != NULL) {
        printf("student.txt 파일을 생성하였습니다.\n");
    }


    int n = 0;
    while (1) {
        printf("관리 옵션을 선택해 주세요(1. 정보 입력, 2. 전체 학생 출력, 3. 끝내기) : ");
        scanf("%d", &n);
        getchar();
        //엔터 버퍼 플러시

       
        if (n == 1) {
            fp = fopen("student.txt", "a+");

            printf("이름 : ");
            scanf("%s", (pstudent+i)->name);
            //gets_s(student.name,sizeof(student.name));
            fputs((pstudent + i)->name, fp);
            fputs(" ", fp);
            printf("\n");


            printf("학번 : ");
            scanf("%s", (pstudent + i)->ID);
            //gets_s(student.ID, sizeof(student.ID));
            fputs((pstudent + i)->ID, fp);
            fputs(" ", fp);
            printf("\n");


            printf("번호 : ");
            scanf("%s", (pstudent + i)->phone);
            //gets_s(student.phone, sizeof(student.phone));
            fputs((pstudent + i)->phone, fp);
            fputs(" ", fp);
            printf("\n");


            printf("주소 : ");
            scanf("%s", (pstudent + i)->address);
            //gets_s(student.address, sizeof(student.address));
            fputs((pstudent + i)->address, fp);
            fputs("\n", fp);
            //각각의 정보를 구조체 student의 항목들에 저장후 txt에 기록(기록시 공백 혹은 \n로 구분)


            printf("\n");



            fclose(fp);
            // 입력된 내용들을 파일에 저장


            i++;
            //다음 값으로 넘겨줌
            pstudent = (STUDENT*)realloc(pstudent, sizeof(STUDENT)*(i+1));
            // 메모리 확장

        }

        else if (n == 2) {
            FILE* fpc;
            fpc = fopen("student.txt", "r");
            
            fseek(fpc, 0, SEEK_END);
            int chk = ftell(fpc);
            //파일 내 정보 유무 체킹

            int j = 0;
            STUDENT* prt = (STUDENT*)malloc(sizeof(STUDENT));
            //리드 된 자료 저장용 구조체 포인터 할당

            if (chk == 0) {
                printf("데이터가 없습니다.\n");
                //chk가 0일 경우 데이터가 없는 케이스임을 알림.
                fclose(fpc);
                //체킹용 fpc 클로즈

            }

            else {
                fp = fopen("student.txt", "r");
                while(fscanf(fp, "%s%s%s%s", (prt + j)->name, (prt + j)->ID, (prt + j)->phone, (prt + j)->address) != EOF){

                    printf("이름 : %s\n", (prt + j)->name);
                    printf("학번 : %s\n", (prt + j)->ID);
                    printf("번호 : %s\n", (prt + j)->phone);
                    printf("주소 : %s\n", (prt + j)->address);

                    j++;
                    prt = (STUDENT*)realloc(prt, sizeof(STUDENT) * (j + 1));
                    //한줄의 자료가 출력 완료될 시 메모리 확장


                }
                fclose(fp);
                // 읽기가 끝났으면 close
            }
        }


        else if (n == 3) {
            printf("학생 정보가 저장됩니다.\n");
            break;

        }

        else {
            printf("다시 입력하세요.\n");
            // 다른 명령어 입력 방지
        }

    }

    return 0;
}
