#include <cstdio>

int main() {
	int a, b, c, max;

	scanf("%d%d%d", &a, &b, &c);

	max = a;

	if (max < b) {
		max = b;
	}

	if (max < c) {
		max = c;
	}

	printf("%d\n", max);

	return 0;
}
