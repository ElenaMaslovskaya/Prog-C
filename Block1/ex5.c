#include <stdio.h>

int main() {
		int n;
		int k = 1;

		printf("Enter the positive number: ");
		scanf("%d", &n);

		if (n <= 0) {
				printf("Error: Please enter a positive number.\n");
				return 1;
		}

		while (k*k <= n) {
				k++;
		}

		printf("The smallest k such that k*k is greater than %d is: %d\n", n, k);

		return 0;
}