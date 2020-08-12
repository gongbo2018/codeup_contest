#include <cstdio>
#include <cmath>

int main() {
	double a=0, b=0, c=0;

	scanf("%lf %lf %lf", &a, &b, &c);

	double r1 = 0, r2=0, delta=0;
	delta = b*b - 4.0 * a * c;

	if (delta < 0) {
		printf("No real roots!\n");
		return 0;
	}

	
	r1 = (-b + sqrt(delta)) / 2.0 * a;
	r2 = (-b - sqrt(delta)) / 2.0 * a;

	printf("r1=%7.2lf\n", r1);
	printf("r2=%7.2lf\n", r2);



	return 0;
}



