#include <stdio.h>
#define MAX_LEN 45 

int main () {
	int lenghts[MAX_LEN], cl, c, i;
	for (i = 0; i<MAX_LEN; i++)
		lenghts[i] = 0;

	c = cl = 0;

	while ((c = getchar()) != EOF) {
		if ((c == ' ' || c == '\t' || c == '\n') && cl!=0) {
			++lenghts[cl-1];
			cl = 0;
		} else {
			++cl;
		}
	}
	++lenghts[cl-1];

	for (i = 0; i<MAX_LEN; i++) {
		int ln = lenghts[i];
		if (ln > 0) {
			printf("%3d\t", i+1);
			for (int c = 0; c<lenghts[i]; c++)
				printf("|");
			printf("\n");
		}
	}
       		
}
