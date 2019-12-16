#include <stdio.h>
#include <math.h>

int inv_key(int n);
int inv(int x, int p, int n);

int main () {
	printf("%d\n", inv(4, 0, 4));
	return 0;
}

int inv(int x,int p,int n) {
	return (x ^ (inv_key(n) << p) );
}

int inv_key(int n) {
	int s = 0;
	for (int i = 0; i < n; i++)
		s += pow((double)2, (double) i);
	return s;
}
