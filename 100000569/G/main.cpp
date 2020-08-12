#include <cstdio>

int main() {
	int arr[100];
	int n = 20;
	arr[0] = 1;
	arr[1] = 1;

		for (int i=2; i<=n;i++) {
			arr[i] = arr[i-1] + arr[i-2];
		}

	for (int j=0;j<n;j++) {
		printf("%d\n", arr[j]);
	}

	return 0;
}
