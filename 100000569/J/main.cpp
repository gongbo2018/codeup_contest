#include <cstdio>
#include <cstring>

int main() {
	char arr[3][100];
	for (int i=0;i<3;i++) {
		gets(arr[i]);
	}

	char maxStr;
	if (strcmp(arr[0],arr[1]) > 0 && strcmp(arr[0], arr[2])>0){
		puts(arr[0]);
	}

	if (strcmp(arr[1], arr[0])> 0 && strcmp(arr[1], arr[2])>0){
		puts(arr[1]);
	}

	if (strcmp(arr[2], arr[0])>0 && strcmp(arr[2], arr[1])>0){
		puts(arr[2]);
	}



	return 0;
}
