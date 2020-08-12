#include <cstdio>

int main() {
	int arr[2][3];

	for(int i=0;i<2;i++) {
		for (int j=0;j<3;j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	int ch_arr[3][2];
	for(int i=0;i<2;i++) {
		for(int j=0;j<3;j++) {
			ch_arr[j][i] = arr[i][j];
			//printf("%d", arr[j][i]);
		}
	}


	for(int i=0;i<3;i++) {
		for(int j=0;j<2;j++){
			printf("%d ", ch_arr[i][j]);
		}	
		printf("\n");
	}

}
