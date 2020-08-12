#include <cstdio>
#include <cmath>

int main() {
	int i=1, j=1;
	double sum=0, tmp=0;
	double min_tmp = pow(10, -6);
	while(true){
		tmp = 1.0/j;
		if (fabs(tmp) < min_tmp){
			break;
		}

		if (i%2==0){
			sum -= tmp;
		} else {
			sum += tmp;
		}

		printf("%d, %d, %.25f\n", i, j, tmp);


		i++;
		j+=2;
	}

	printf("PI=%10.8f\n", sum*4);

	return 0;
}
