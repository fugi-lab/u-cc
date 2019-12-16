#include <stdio.h>

int any(char s1[], char s2[]);

int main () {
	int o = any("hello world", "guy");
	printf("%d\n", o);
	return 0;
}

int any(char s1[], char s2[]) {
	int i, c, j, k;
	i = j = 0;
	while ((c = s1[i++]) != '\0') {
		while ((k = s2[j++]) != '\0') {
			if (c == k)
				return i;
		}
		j = 0;
	}

	return -1;
}
