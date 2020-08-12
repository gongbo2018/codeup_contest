#include <cstdio>

int main() {
	int  data[10];

	for (int i=0;i<10;i++) {
		scanf("%d", &data[i]);
	}

	for (int j=9; j>=0;j--) {
		printf("%d\n", data[j]);
	}

	return 0;
}
