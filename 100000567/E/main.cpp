#include <cstdio>

int main() {
	double profit = 0, bonus = 0;
	scanf("%lf", &profit);
	
	if (profit <= 100000) {
		bonus = profit * 0.1;
	} else if (profit > 100000 && profit <= 200000) {
		bonus = (profit-100000) * 0.075 + 100000 * 0.1;
	} else if (profit > 200000 && profit <= 400000) {
		bonus = 100000 * 0.1 + (200000-100000) * 0.075 + (profit - 200000) * 0.05;
	} else if (profit > 400000 && profit <= 600000) {
		bonus = 100000 * 0.1 + (200000-100000) * 0.075 + 200000 * 0.05 + (profit-400000) * 0.03;
	} else if (profit > 600000 && profit <= 1000000) {
		bonus = 100000 * 0.1 + (200000-100000) * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (profit-600000) * 0.015;
	} else if (profit > 1000000) {
		bonus = 100000 * 0.1 + (200000-100000) * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 200000 * 0.015 + (profit-600000) * 0.01;
	}




	printf("%.2f\n", bonus);

	return 0;
}
