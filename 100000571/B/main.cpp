#include <cstdio>

int main() {
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	int * pa = &a;
	int * pb = &b;
	int * pc = &c;

	int tmp;
	if (*pa < *pb) {
		tmp = *pa;
		*pa = *pb;
		*pb = tmp;
	}

	if (*pa < *pc) {
		tmp = *pa;
		*pa = *pc;
		*pc = tmp;
	}

	if (*pb < *pc) {
		tmp = *pb;
		*pb = *pc;
		*pc = tmp;
	}

	printf("%d %d %d\n", *pa, *pb, *pc);

	return 0;

}
