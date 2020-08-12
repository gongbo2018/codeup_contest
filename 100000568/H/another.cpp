#include <cstdio>

int fib(int n);

int main() {
	int n=0, val=0;
	scanf("%d", &n);
	val = fib(n);

	printf("%d\n", val);

	return 0;
}

int fib(int n) {
	int fn = 0;
	if (n < 3) {
		return 1;
	} else {
		fn = fib(n-1) + fib(n-2);
		return fn;
	}
}
