#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/*
 * A cute little program that converts Fahrenheit to Celsius :)
 * */

float fahr_to_cel (int fahr) {
	return ( (5.0/9.0) * (fahr-32.0) );
} 

int main () {
	printf("%3s %11s\n", "Fahrenheit" , "Celsius");
	
	for (int fahr = UPPER; fahr >= LOWER; fahr-=STEP)
		printf("%3.0d %16.1f\n", fahr, fahr_to_cel(fahr));
	
	return 0;
}


