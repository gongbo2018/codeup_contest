#include <cstdio>

struct student {
    int num;
    char name[20];
    char sex;
    int age;
};

int main() {
	int n =0;
	scanf("%d", &n);

	student list[100];
	student *p = list;

	for (int i=0; i<n;i++, p++){
		scanf("%d %s %c %d", &p->num, p->name, &p->sex, &p->age);
	}

	for(int i=0;i<n;i++) {
		printf("%d %s %c %d\n", list[i].num, list[i].name, list[i].sex, list[i].age);
	}
	
}
