#include <cstdio>

int main() {
	int sum = 0, tmp = 1;
	while(true) {
		sum += tmp;
		tmp++;

		if (tmp > 100){
			break;
		}
	}

	printf("%d\n", sum);

	return 0;
}
