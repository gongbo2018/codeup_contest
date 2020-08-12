#include <cstdio>

int main() {
	int all_data[20];

	int f1 = 1;
	int f2 = 1;

	all_data[0] = 1;

	int fn=0;
	for (int i=1;i<=20;i++) {
		fn = f1+f2;
		all_data[i] = fn;

		f1=f2;
		f2=fn;
	}

	double val;
	for (int i=0;i<20;i++){
		//printf("%d\n", all_data[i]);

		val += (double) all_data[i+1]/(double) all_data[i];
	}

	printf("%.6f\n", val);

	return 0;
}
