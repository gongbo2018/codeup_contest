#include <cstdio>

int main() {
	int n = 0;
	scanf("%d", &n);

	int f1 = 1;
	int f2 = 1;
	int fn = 0;

	if (n>3){
		for (int i=3;i<=n;i++) {
			fn = f2+f1;
			f1 = f2;
			f2 = fn;
		}
		printf("%d\n", fn);
	} else {
		printf("%d\n", 1);
	}

	return 0;
}
