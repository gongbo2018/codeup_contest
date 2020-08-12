#include <cstdio>

int main() {
	double a=0, b=0, c=0, tmp=0;
	scanf("%lf%lf%lf", &a, &b, &c);
	if (a > b) {
		tmp = b;
		b = a;
		a = tmp;
	}

	if (b > c) {
		tmp = c;
		c = b;
		b = tmp;
	}

	if (a > b) {
		tmp = b;
		b = a;
		a = tmp;
	}

	printf("%.2f %.2f %.2f\n", a, b, c);

	return 0;
}
