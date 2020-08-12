#include <cstdio>
#include <cstring>

void vowels(char s1[], char s2[]);
int main() {
	char inputStr[100];
	char vowelsStr[100]={};
	scanf("%s", inputStr);
	vowels(inputStr, vowelsStr);
	puts(vowelsStr);

	return 0;
}

void vowels(char s1[], char s2[]){
	int inputLen = strlen(s1);
	int j=0;
	for (int i=0;i<inputLen;i++) {
		switch (s1[i]){
			case 'a':
			case 'e':
			case 'u':
			case 'i':
			case 'o':
				s2[j++] = s1[i];
				break;
			default:
				break;

		}
	}
}
