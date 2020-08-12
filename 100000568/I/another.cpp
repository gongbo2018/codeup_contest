#include <cstdio>

int main() {
	double numerator=2, denominator=1;
	double sum=0, tmp=0;
	for (int i=0;i<20;i++) {
		sum += numerator/denominator;
		tmp = denominator;
		denominator = numerator;
		numerator = tmp + numerator;
	}

	printf("%.6f\n", sum);

	return 0;
}
