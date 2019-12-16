#include <stdio.h>

int main () {
	int c, prev = 1;
	while ((c = getchar()) != EOF) {
		if (!((prev == ' ') && prev == c))
			putchar(c);
		prev = c;

	}
}
