#include <cstdio>
#include <cstring>

int main() {
	char data1[20], data2[20];
	int len1=0, len2=0;

	while(scanf("%s %s", data1, data2) != EOF) {
		len1 = strlen(data1);
		len2 = strlen(data2);
		int sum=0;
		for (int i=0;i<len1;i++) {
			for (int j=0;j<len2;j++) {
				sum += (data1[i] - '0') * (data2[j] - '0');
			}
		}

		printf("%d\n", sum);
	}


	return 0;
}
