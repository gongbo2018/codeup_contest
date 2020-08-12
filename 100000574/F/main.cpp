#include <cstdio>

int main() {
	int n=0;
	while(scanf("%d", &n) != EOF) {
		int sum = 0;
		int data = 0;
		for (int i=0;i<n;i++) {
			scanf("%d", &data);
			sum += data;
		}
		printf("%d\n", sum);
	}
}
