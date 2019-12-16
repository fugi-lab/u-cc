#include <stdio.h>

int pow(int n, int p);

int main () {
	printf("%d", pow(3,2));
	return 0;
}

int pow(int n, int p) {
	int h;
	for (h = 1; p>0; --n)
		h *= n; 
}
