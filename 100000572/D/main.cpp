#include <cstdio>

struct result {
	int stu_no;
	char name[20];
	int score1;
	int score2;
	int score3;
};

void input(result * result_list);
void print(result * result_list);

int main() {
	result result_list[5];
	result* list_p = result_list; 
	input(list_p);
	print(list_p);
}

void input(result * result_list) {
	for(int i=0;i<5;i++) {
		scanf("%d %s %d %d %d", &(result_list+i)->stu_no, (result_list+i)->name, &(result_list+i)->score1, &(result_list+i)->score2, &(result_list+i)->score3);
	}
}

void print(result *result_list) {
	for(int i=0;i<5;i++) {
		printf("%d %s %d %d %d\n", (result_list+i)->stu_no, (result_list+i)->name, (result_list+i)->score1, (result_list+i)->score2, (result_list+i)->score3);
	}
}
