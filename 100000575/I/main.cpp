#include <cstdio>

int check_win(char a, char b);

int main() {
	int n = 0;
	scanf("%d", &n);
	char A, B;
	int a_win_count[3]={0}, b_win_count[3]={0};
		
	while(n--) {
		getchar();
		scanf("%c%c", &A, &B);
		int answer = check_win(A, B);
		switch (answer) {
			case -1:
				a_win_count[2]++;
				b_win_count[0]++;
				break;
			case 0:
				a_win_count[1]++;
				b_win_count[1]++;
				break;
			case 1:
				a_win_count[0]++;
				b_win_count[2]++;
			default:
				break;
		}
	}

	printf("%d %d %d\n", a_win_count[0], a_win_count[1], a_win_count[2]);
	printf("%d %d %d\n", b_win_count[0], b_win_count[1], b_win_count[2]);
		
}

int check_win(char a, char b) {
	int answer = -1;
	if (a == 'C') {
		if (b == 'C') {
			answer = 0;
		} else if(b == 'B') {
			answer = -1;
		} else if(b == 'J') {
			answer = 1;
		}
	}

	if (a == 'B') {
		if (b == 'B') {
			answer = 0;
		} else if (b == 'C') {
			answer = 1;
		} else if (b == 'J') {
			answer = -1;
		}
	}

	if (a =='J') {
		if (b == 'B') {
			answer = 1;
		} else if(b == 'C') {
			answer = -1;
		} else if(b == 'J') {
			answer = 0;
		}
	}

	return answer;
}
