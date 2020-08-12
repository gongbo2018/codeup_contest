#include <cstdio>

int main(){
	int n=0;
	scanf("%d", &n);

	while(n--){
		int num=0;
		int sum=0;
		scanf("%d", &num);
		int data=0;
		for(int i=0; i< num; i++) {
			scanf("%d", &data);
			sum += data;
		}
		printf("%d\n", sum);
	}
}
