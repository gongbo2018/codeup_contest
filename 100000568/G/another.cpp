#include <cstdio>
#include <cmath>


int main(){
	double tmp = 0;
	double sign = 1.0;
	double j = 1.0;
	double t = 1.0/j;

	while (fabs(t) >= 1e-6) {
		tmp=tmp+t*sign;
		sign=-sign;
		j+=2;
		t=1.0/j;
	}

	printf("PI=%10.8f\n", tmp*4);

	return 0;
}


/*
int main()
{
    double PI=0;
    double n=1.0;
    double t=1/n;
    double sign=1;
    while(fabs(t)>=1e-6)
    {
        PI=PI+t*sign;
        sign=-sign;
        n=n+2;
        t=1/n;
    }
    printf("PI=%10.8f\n",PI*4);
    return 0;
}
*/
