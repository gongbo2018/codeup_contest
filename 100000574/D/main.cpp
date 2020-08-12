#include <cstdio>

int main() {
	while (true) {
		int n = 0;
		scanf("%d", &n);
		if (n==0) {
			break;
		}

		int sum=0;
		int num=0;
		for(int i=0; i< n;i++) {
			scanf("%d", &num);
			sum += num;
		}
		printf("%d\n", sum);
	}

	return 0;
}
