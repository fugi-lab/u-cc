#include <stdio.h>
#include <limits.h>

void itoa(unsigned n, char s[]);

int main () {
	char s[32];
	itoa(UINT_MAX, s);
	printf("%s\n", s);
	return 0;
}

void itoa(unsigned n, char s[]) {
    static int i = 0;
    if (n >= INT_MIN) {
	    s[i++] = '-';
        n = - ((int) n);
    }

    if (n / 10 > 0) {
        itoa(n/10, s);
    }
    s[i++] = n % 10 + '0';
    s[i] = '\0';
}
