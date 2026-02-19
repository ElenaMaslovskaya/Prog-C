#include <stdio.h>

int main() {
		long long factorial = 1;
		int n;
		printf("Enter a positive integer: ");
		scanf("%d", &n);

		if(n < 0) {
				printf("Error: Factorial is not defined for negative numbers.\n");
				return 1;
		}

		for (int i = 1; i <= n; i++) {
				factorial *= i;
		}

		printf("The factorial of %d is: %lld\n", n, factorial);

		return 0;
}