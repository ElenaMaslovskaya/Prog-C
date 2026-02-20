#include <stdio.h>
int main() {
		int a, b;
		printf("Enter two positive integers: ");	
		scanf("%d %d", &a, &b);

		if (a <= 0 || b <= 0) {
				printf("Error: Please enter positive integers.\n");
				return 1;
		}

		int lcm = (a > b) ? a : b;

		while (lcm % a != 0 || lcm % b != 0) {
				lcm++;
		}

		printf("The LCM of %d and %d is: %d\n", a, b, lcm);

		return 0;
}	