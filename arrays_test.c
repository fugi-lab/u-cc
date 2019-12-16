#include <stdio.h>

int main () {
	int numbers[2];
	numbers[0] = 1;
	numbers[1] = 2;
	swap_them(numbers);
	printf("%d %d\n", numbers[0], numbers[1]);
	return 0;
}

void swap_them(int nums[]) {
	nums[0] = nums[0] ^ nums[1];
	nums[1] = nums[0] ^ nums[1];
	nums[0] = nums [0] ^ nums[1];
} 

