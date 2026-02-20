#include <stdio.h> 

int main() {
		int num;
		printf("Enter a positive number: ");	
		scanf("%d", &num);

		if (num <= 0) {
				printf("Error: Please enter a positive number.\n");
				return 1;
		}

		for (int i = 1; i <= num; i++) {
				if (num == (i*i*i)) {
						printf("%d ", i);
				}
		}

		return 0;
}