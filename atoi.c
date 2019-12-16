#include <stdio.h>

int atoi(char s[]);

int main () {
	printf("%d\n", atoi("1258"));	
	return 0;
}

int atoi(char s[]) {
	int n = 0;
	for (int i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');
	return n;
}


