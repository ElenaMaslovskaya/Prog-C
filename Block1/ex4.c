#include <stdio.h>

int main() {
		int num; 
		printf("Enter a positive integer: ");
		scanf("%d", &num);

		if (num <= 0) {
				printf("Not a power of 3.\n");
				return 0;
		} 

		while (num % 3 == 0) {
				num /= 3;
		}

		if (num == 1) {
				printf("The number is a power of 3.\n");
		} else {
				printf("Not a power of 3.\n");
		}

		return 0;
}