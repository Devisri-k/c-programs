#include <stdio.h>

int main() {
	int n,temp;
	 printf("Enter an integer: ");
    scanf("%d", &n);
		int p = 0;
		while (n > 0) {

			int rem = n % 10;
			p = (p) + (rem * rem * rem);
			n = n / 10;
		}
		if (temp == p) {
			printf("Yes. It is Armstrong No.");
		}
		else {
			printf("No. It is not an Armstrong No.");
		}
	return 0;
}