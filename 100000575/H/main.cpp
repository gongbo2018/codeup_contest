#include <cstdio>

int main() {
	long long a, da, b, db, pa, pb, tmpa, tmpb;
	while (scanf("%lld %lld %lld %lld", &a, &da, &b, &db) != EOF) {
		tmpa = a;
		pa = 0;
		while (tmpa != 0) {
			if (tmpa % 10 == da) {
				pa = pa*10 +da;
			}
			tmpa /= 10;
		}

		tmpb = b;
		pb = 0;
		while (tmpb != 0) {
			if (tmpb % 10 == db) {
				pb = pb *10 +db;
			}
			tmpb /= 10;
		}
		
		printf("%lld\n", pa + pb);
	}



	return 0;
}
