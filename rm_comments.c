#include <stdio.h>
#define MAX 10000

int inpt(char s[], int lim); 
void rmc(char s[], char cln[], int len);

int main () {
	int len;
	char str[MAX];
	// Get input
	len = inpt(str, MAX);
	// Remove comments
	char cln[len];
	rmc(str, cln, len);
	// Test

	printf("\n-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n%s\n+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+\n", cln);
	return 0;
}

int inpt (char s[], int lim) {
	int c, p, in_str;
	p = 0;
	while ((c = getchar()) != EOF && p <= lim) {
		s[p] = c;
		++p;
	}
	s[p] = '\0';
	return p;
}

void rmc(char s[], char cln[], int len) {
	int p, i, state;
	i = p = 0;
	state = 1;
	while (p <= len) {
		
		if ((s[p] == '/' && s[p+1] == '/') || (s[p] == '/' && s[p+1] == '*'))
			state = 0;
		
		else if ( s[p] == '\n' && state == 0)
			state = 1;
		
		else if ( s[p] == '*' && s[p+1] == '/') {
			state = 1;
			p += 2;
		}

		if (state == 1) {
			cln[i] = s[p];
			++i;
		}
		++p;

	}	
}
