#include <cstdio>

int main() {
	int data[10];
	int num;
	int i=0;

	while(true) {
		scanf("%d", &num);
		data[i++] = num;
		char c = getchar();
		if (c=='\n') {
			break;
		}
	}

	for (int j=9;j>=0;j--) {
		printf("%d\n", data[j]);	
	}

	return 0;
}
