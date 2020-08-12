#include <cstdio>

void input(int* arr);
void process(int* arr);
void output(int* arr);
int main() {
	int arr[10];
	input(arr);
	process(arr);
	output(arr);

	return 0;
}

void input(int* arr) {
	for (int i=0;i<10;i++) {
		scanf("%d", &arr[i]);
	}
}

void process(int* arr) {
	int min=0, max=0;
	for(int i=0;i<10;i++) {
		if (arr[min] > arr[i]) {
			min = i;
		}

		if (arr[max]<arr[i]) {
			max = i;
		}
	}

	int minTmp = 0;
	int maxTmp = 0;
	minTmp = arr[min];
	arr[min] = arr[0];
	arr[0] = minTmp;

	maxTmp = arr[max];
	arr[max] = arr[9];
	arr[9] = maxTmp;

}

void output(int * arr) {
	for (int i=0;i< 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
