#include <cstdio>

int main() {
	int arr[10];

	for(int l=0;l<10;l++){
		scanf("%d", &arr[l]);
	}

	int tmp=0;
	for (int i=0;i<10;i++) {
		for(int j=0;j<10-i;j++) {
			if (arr[j] > arr[j+1]) {
				tmp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = tmp;
			} 
		}
	}

	for(int k=0;k<10;k++) {
		printf("%d\n",arr[k]);
	}
	
	return 0;
}
