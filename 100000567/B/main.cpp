#include <cstdio>

int main() {
	double a, b;
	scanf("%lf %lf", &a, &b);
	if (a < b) {
		printf("%.2f %.2f\n", a, b);
	} else {
		printf("%.2f %.2f\n", b, a);
	}

	return 0;
}
