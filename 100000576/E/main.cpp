#include <cstdio>

struct student {
	int  no;
	char name[100];
	char sex[10];
	int  age;
} student_data[1002];

int main() {
    int m=0;
    scanf("%d", &m);
    while (m--){
        int N=0;
        scanf("%d", &N);
        if (N<1) {
            return 0;
        }

        for (int i=0;i<N;i++) {
            scanf("%d %s %s %d", &student_data[i].no, student_data[i].name, student_data[i].sex, &student_data[i].age);
        }

        int no=0;
        scanf("%d", &no);
        int no_answer_flag = 1;
        for(int j=0;j<N;j++){
            if (student_data[j].no == no) {
                no_answer_flag = 0;
                printf("%d %s %s %d\n", student_data[j].no, student_data[j].name, student_data[j].sex, student_data[j].age);
                break;
            }
        }

        if (no_answer_flag == 1) {
            printf("No Answer!\n");
        }
    }

	return 0;
}

