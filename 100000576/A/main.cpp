#include <cstdio>

int main() {
	int N = 0;
	while(scanf("%d", &N) != EOF) {
		if (N==0) {
			return 0;
		}
		int data_arr[N];
		for (int i=0;i<N;i++) {
			scanf("%d", &data_arr[i]);
		}
		int data=0;
		scanf("%d", &data);

		int num =0;

		for (int i=0;i<N;i++){
			if (data_arr[i] == data){
				num++;
			}
		}

		printf("%d\n", num);
	}

	return 0;
}
