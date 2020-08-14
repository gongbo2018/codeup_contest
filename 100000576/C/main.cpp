#include <cstdio>
#include <cstring>

struct student {
	char no[100];
	char name[100];
	char sex[10];
	int  age;
} student_data[1002];


int main() {
	int N=0;
	scanf("%d", &N);
	if (N<1) {
		return 0;
	}

	for (int i=0;i<N;i++) {
		scanf("%s %s %s %d", student_data[i].no, student_data[i].name, student_data[i].sex, &student_data[i].age);
	}

	int M=0;
	scanf("%d", &M);
	char no[100];
	for (int i=0;i<M;i++){
		scanf("%s", no);
		int no_answer_flag = 1;
		for(int j=0;j<N;j++){
			if (strcmp(student_data[j].no,no) == 0) {
				no_answer_flag = 0;
				printf("%s %s %s %d\n", student_data[j].no, student_data[j].name, student_data[j].sex, student_data[j].age);
				break;
			}
		}

		if (no_answer_flag == 1) {
			printf("No Answer!\n");
		}
	}

	return 0;
}
