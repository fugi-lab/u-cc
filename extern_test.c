#include <stdio.h>
void test(void);

int main () {
	extern int j;
	j = 1;
	printf("%d", j);
	test();
	printf("%d", j);
}

void test(void) {
	extern j;
	j += 5;
}
