#include <cstdio>

int main() {
	int n=0;
	scanf("%d", &n);

	for (int i=0;i<n;i++) {
		int num = 0;
		scanf("%d", &num);
		int sum=0;
		int data=0;
		for (int j=0;j<num;j++) {
			scanf("%d", &data);
			sum += data;
		}
		printf("%d\n\n", sum);
	}
}
