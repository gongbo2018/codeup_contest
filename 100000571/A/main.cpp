#include <cstdio>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	int * pa = &a;
	int * pb = &b;

	if (*pa > *pb) {
		printf("%d %d\n", *pa, *pb);
	} else {
		printf("%d %d\n", *pb, *pa);
	}

	return 0;
}
