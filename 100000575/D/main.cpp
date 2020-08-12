#include <cstdio>

int main() {
	int n = 0;
	int num=0;
	while(scanf("%d", &n)!=EOF){
		int odd_num = 0, even_num=0;
		for (int i=0;i<n;i++) {
			scanf("%d", &num);
			if (num % 2 == 0) {
				even_num++;
			} else {
				odd_num ++;
			}
		}
		if (even_num > odd_num) {
			printf("NO\n");
		} else {
			printf("YES\n");
		}
	}


	return 0;
}
