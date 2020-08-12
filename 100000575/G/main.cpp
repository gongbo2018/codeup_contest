#include <cstdio>

int main() {
	int n=0;
	while(scanf("%d", &n) != EOF) {
		int data[n];
		for (int i=0;i<n;i++) {
			scanf("%d", &data[i]);
		}

		int a1_sum = 0;
		int a1_count = 0;
		int a2_sum = 0;
		int a2_count = 0;
		int a3_count = 0;
		int a4_sum = 0;
		int a4_count = 0;
		int a5_max = 0;
		int a5_count = 0;
		for(int j=0;j<n;j++) {
			switch (data[j] % 5) {
				case 0:
					if (data[j] %2 == 0){
						a1_sum += data[j];
						a1_count++;
					}
					break;
				case 1:
					a2_count++;
					if (a2_count % 2 == 0) {
						a2_sum -= data[j];
					} else {
						a2_sum += data[j];
					}
					break;
				case 2:
					a3_count++;
					break;
				case 3:
					a4_count++;
					a4_sum += data[j];
					break;
				case 4:
					a5_count++;
					if (data[j] > a5_max) {
						a5_max = data[j];
					}
					break;
				default:
					break;
			}
		}
		if (a1_count == 0){
			printf("N ");
		} else {
			printf("%d ", a1_sum);
		}
		if (a2_count == 0) {
			printf("N ");
		} else {
			printf("%d ", a2_sum);
		}
		if (a3_count == 0) {
			printf("N ");
		} else {
			printf("%d ", a3_count);
		}
		if (a4_count == 0) {
			printf("N ");
		} else {
			printf("%.1f ", (double) a4_sum / (double) a4_count);
		}
		if (a5_count == 0){
			printf("N");
		} else {
			printf("%d", a5_max);
		}
		printf("\n");
	}
}
