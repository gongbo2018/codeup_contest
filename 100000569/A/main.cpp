#include <cstdio>

int main() {
	int num=0;
	int i=0;
	int data[10];

	while(true){
		scanf("%d", &num);
		char c=getchar();
		data[i++] = num;
		if (c=='\n'){
			break;
		}
	}

	int insert_data;
	scanf("%d", &insert_data);

	int position;
	for (int j=0;j<10;j++) {
		if (data[j] > insert_data) {
			position = j;
			break;
		}
	}

	for (int k=10;k>position;k--){
		data[k] = data[k-1];
	}
	data[position] = insert_data;

	for(i=0;i<10;i++) {
		printf("%d\n", data[i]);
	}

	return 0;
}
