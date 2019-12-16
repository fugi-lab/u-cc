#include <stdio.h>
#define MAX 1000

int gl(char s[], int lim);
void copy(char dest[], char orgn[]);

int main () {
	int len;
	int max;
	char line[MAX];
	char longest[MAX];

	max = 0;
	while ((len = gl(line, MAX)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}

	if (max > 0)
		printf("The longest line is \"%s\"\n", longest);
	return 0;
}

int gl(char s[], int lim) {
	int c, i;

	for (i=0; i < lim-1 && (c=getchar())!= EOF && c != '\n'; i++) {
		s[i] = c;
		if (c == '\n') {
			s[i] = c;
			++i;
		}
	}

	s[i] = '\0';
	return i;

}

void copy(char dest[], char orgn[]) {
	int i = 0;
	while ((dest[i] = orgn[i]) != '\0')
		++i;
}

