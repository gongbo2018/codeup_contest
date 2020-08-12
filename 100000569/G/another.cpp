#include <cstdio>

int main() {
	int f0 = 0;
	int f1 = 1;

	int n = 20;

	printf("%d\n", f1);
	int fn = 0;
	for (int i=1;i<n;i++) {
		fn = f1 + f0;
		printf("%d\n", fn);
		f0 = f1;
		f1 = fn;
	}
	
	return 0;
}
