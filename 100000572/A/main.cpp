#include <cstdio>
#include <cstring>

struct person {
	char name[20];
	int count;
} leader[3] = {"Li", 0, "Zhang", 0, "Fun", 0};

int main() {
	int n=0;
	scanf("%d", &n);

	char tmpChar[20];
	for(int j=0; j<n;j++) {
		scanf("%s", tmpChar);
		for (int k=0;k<3;k++) {
			if (strcmp(tmpChar, leader[k].name) == 0) {
				leader[k].count +=1;
				break;
			}
		}
	}

	for (int i=0;i<3;i++) {
		printf("%s:%d\n", leader[i].name, leader[i].count);
	}
}
