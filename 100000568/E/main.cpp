#include <cstdio>

int main(){
	int i=0, sum=0;
	while(true){
		sum += i;
		if (sum > 1000){
			break;
		} else {
			i++;
		}
	}

	printf("%d\n", i);
}
