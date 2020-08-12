#include <cstdio>

int main() {
	int n=0;
	scanf("%d", &n);

	int data[n];
	for (int i=0;i<n;i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		data[i] = a+b;
	}

	for (int j=0;j<n;j++) {
		printf("%d\n", data[j]);
	}
}
