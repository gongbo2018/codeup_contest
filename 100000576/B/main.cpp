#include <cstdio>

int main() {
	int n=0;
	while(scanf("%d", &n) != EOF){
	    int data[n];
    	for (int i=0;i<n;i++){
    		scanf("%d", &data[i]);
    	}
    
    	int num;
    	scanf("%d", &num);
    	int k=-1;
    	for (int j=0;j<n;j++) {
    		if(data[j] == num){
    			k=j;
    			break;
    		}
    	}
    
    	printf("%d\n", k);
	}


	return 0;
}
