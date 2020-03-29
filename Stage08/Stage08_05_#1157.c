#include <stdio.h>

int main() {
	char str[1000000];
	int alpha[26] = { 0, };
	int len = 0;
	int max;
	int cnt = 0;
	int index = 0;
	scanf("%s", str);
	for (int i = 0; i < 1000000; i++) { 
		if (str[i] == '\0')
			break;
			len++;
	}
	for (int i = 0; i < len; i++) { 
		int temp;
		temp = str[i];
		if (temp < 97) {
			alpha[temp - 65]++;
		}
		else {
			alpha[temp - 97]++;
		}
	}
	max = alpha[0];
	for (int i = 1; i < 26; i++) { 
		if (max < alpha[i]) {
			max = alpha[i]; 
			index = i;
		}
	}
	for (int i = 0; i < 26; i++) { 
		if (max == alpha[i]) 
			cnt++;
	}

	if (cnt > 1) printf("?\n");
	else printf("%c\n", index + 65);
}
