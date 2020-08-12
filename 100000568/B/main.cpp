#include <cstdio>

int main() {
	int sum=0, tmp=0;

	do {
		sum += tmp;
		tmp++;
	} while (tmp <= 100); 

	printf("%d\n", sum);

	return 0;
}
