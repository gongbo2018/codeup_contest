#include <cstdio>
#include <cstring>

int main() {
	 char str[1000];
	 scanf("%s", str);

	 int len=strlen(str);
	 for(int i=0;i<len;i++){
		 if (str[i] >=65 && str[i] <= 90){
			 str[i] = 65-str[i] + 65 + 26 - 1;
		 }
		 if (str[i] >= 97 && str[i] <= 122) {
			 str[i] = 97-str[i]+97+26-1;
		 }
		 printf("%c", str[i]);
	 }
	 printf("\n");
	 return 0;
}
