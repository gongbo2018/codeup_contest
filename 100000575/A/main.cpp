#include <cstdio>
#include <cstring>

int main() {
	while (true) {
		int len;
		int segment;
		scanf("%d %d", &len, &segment);
		if (len == 0 && segment ==0) {
			break;
		}

		int data[len];
		for (int l=0;l<=len;l++){
			data[l] = 0;
		}

		int from=0, to=0;
		for (int i=0;i<segment;i++) {
			scanf("%d %d", &from, &to);
			for (int j=from;j<=to;j++) {
				data[j] = -1;
			}
		}
		int remain=0;
		for (int k=0;k<=len;k++) {
			if(data[k] == 0) {
				remain++;
			}
		}
		printf("%d\n", remain);
	}
}
