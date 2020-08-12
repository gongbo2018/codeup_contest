#include <cstdio>
#include <cstring>

int main() {
	int n;
	scanf("%d", &n);

	int data[n][n];
	memset(data, 0, sizeof(data));
	data[0][0] = 1;

	for (int i=1;i<n;i++) {
		data[i][0] = 1;
		for (int j=1; j<=i;j++) {
			data[i][j] = data[i-1][j]+data[i-1][j-1];
		}
	}

	for(int i=0;i<n;i++) {
		for(int j=0;j<=i;j++) {
			printf("%d ", data[i][j]);
		}
		printf("\n");
	}

	return 0;
}
