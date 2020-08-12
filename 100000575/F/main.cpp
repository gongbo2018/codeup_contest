#include <cstdio>

int main() {
	int n=0;
	scanf("%d", &n);
	long long a, b, c;
	int data[n];
	for(int i=0;i<n;i++){
		scanf("%lld %lld %lld", &a, &b, &c);
		if (a+b > c){
			data[i] = 1;
		} else {
			data[i] = 0;
		}
	}

	for (int j=0;j<n;j++) {
		if (data[j] == 1){
			printf("Case #%d: true\n", j+1);
		} else {
			printf("Case #%d: false\n", j+1);
		}
	}

	return 0;
}
