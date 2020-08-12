#include <cstdio>

struct member{
	int num;
	char name[10];
	char sex;
	char job;
	union {
		int cla;
		char position[10];
	} category;
};


int main() {
	int n=0;
	scanf("%d", &n);
	member me[100];
	member * mep = me;

	for (int i=0;i<n;i++) {
		scanf("%d %s %c %c", &(mep+i)->num, (mep+i)->name, &(mep+i)->sex, &(mep+i)->job);
		if ((mep+i)->job == 's') {
			scanf("%d", &(mep+i)->category.cla);
		} else if((mep+i)->job == 't') {
			scanf("%s", (mep+i)->category.position);
		}
		
	}

	for(int j=0;j<n;j++) {
		if ((mep+j)-> job == 's'){
			printf("%d %s %c %c %d\n", (mep+j)->num, (mep+j)->name, (mep+j)->sex, (mep+j)->job, (mep+j)->category.cla);
		} else if((mep+j)->job == 't') {
			printf("%d %s %c %c %s\n", (mep+j)->num, (mep+j)->name, (mep+j)->sex, (mep+j)->job, (mep+j)->category.position);
		}
	}


}
