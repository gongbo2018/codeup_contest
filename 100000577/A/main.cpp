#include <cstdio>

int main() {
	int h=0;
	while(scanf("%d", &h) != EOF) {

		int width = h + (h-1)*2;

		for (int i=0;i<h;i++){
			int blank_width = width - h - (i * 2);
			int star_width = width - blank_width;
			for (int j=0;j<blank_width;j++){
				printf(" ");
			}
			for (int k=0;k<star_width;k++){
				printf("*");
			}
			printf("\n");
		}
	}
	

	return 0;
}
