#include <cstdio>
#include <cstring>

int char_to_int(char s[100]) {
	int	s_len = strlen(s);
	int sign = 1;
	int result = 0;

	for (int i=0;i<s_len;i++) {
		if (s[i] == '-' && i == 0) {
			sign = -1;
			continue;
		}
		if(s[i]>='0'&&s[i]<='9'){
			result=result*10+s[i]-'0';
		}
	}


	result = sign * result;
	return result;
}


int main() {
	char s1[100];
	char s2[100];
	int a=0, b=0;

	while(scanf("%s %s", s1, s2) != EOF) {
		a = char_to_int(s1);
		b = char_to_int(s2);
		printf("%d\n", a+b);
	}
}
