#include <cstdio>

int main() {
	int n=0;
	while(scanf("%d", &n) != EOF) {
		int data[n];
		for (int i=0;i<n;i++){
			scanf("%d", &data[i]);
		}

		int m=0;
		scanf("%d", &m);
		for (int j=0;j<m;j++){
			int search_data=0;
			scanf("%d", &search_data);
			int ans_flag = 0;
			for (int i=0;i<n;i++){
				if (data[i] == search_data) {
					ans_flag = 1;
					break;
				}
			}

			if (ans_flag == 1) {
				printf("YES\n");
			} else {
				printf("NO\n");
			}
		}
	}

	return 0;
}
