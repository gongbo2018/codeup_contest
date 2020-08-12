#include <cstdio>
#include <cstring>

int main() {
	char str1[100], str2[100];
	gets(str1);
	gets(str2);

	int len1 = strlen(str1);
	int len2 = strlen(str2);

	int val1 = 0;
	for (int i=0;i<len1;i++) {
		val1 += str1[i];
	}

	int val2 = 0;
	for (int j=0; j< len2; j++) {
		val2 += str2[j];
	}
	printf("%d\n", val1-val2);
}
