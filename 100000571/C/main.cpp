#include <cstdio>

int main() {
	char* a = "I love China!";

	int n;
	scanf("%d", &n);
	a += n;

	printf("%s\n", a);

	return 0;
}
