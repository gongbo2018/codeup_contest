#include <cstdio>
#include <cstring>

void revesal(char str[]);
int main() {
	char str[100];
	scanf("%s", str);
	revesal(str);
	return 0;
}

void revesal(char str[]) {
	int	strLen = strlen(str);
	for (int i=strLen;i>0;i--) {
		printf("%c", str[i-1]);
	}
	printf("\n");
}
