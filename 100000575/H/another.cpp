#include <cstdio>
#include <cstring>

int main() {
	char a[10], b[10];
	int da, db;
	while(scanf("%s %d %s %d", a, &da, b, &db) != EOF){
		int len_a = strlen(a);
		int pa = 0;int pb = 0;
		for (int i=0;i<len_a;i++) {
			if(a[i] != '\0') {
				if((a[i] - '0') == da) {
					pa = pa*10 + da;
				}
			}
		}

		int len_b = strlen(b);
		for (int j=0;j<len_b;j++) {
			if (b[j] != '\0') {
				if ((b[j] - '0' == db)){
					pb = pb*10 +db;
				}
			}
		}

		printf("%d\n", pa+pb);
	}

	return 0;
}
