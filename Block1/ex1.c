#include <stdio.h>

int main() {
		int num;
		int sum_odd = 0;
		int sum_even = 0;
		for (num = 1; num <= 100; num++) {
		if (num % 2 == 0) {
				sum_even += num;
		} else {
				sum_odd += num;
		}
	}
		printf("The sum of odd numbers from 1 to 99 is: %d\n", sum_odd);
		printf("The sum of even numbers from 2 to 100 is: %d\n", sum_even);

		return 0;
}