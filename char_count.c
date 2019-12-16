#include <stdio.h>

int main () {
	long nc = 0;
	for (nc; getchar() != EOF; ++nc);
	printf("%ld\n", nc);
}
