//Rıdvan Urhan
#include <stdio.h>
int main() {
	int theNumber = 2;
	int guess;
	printf("Try to guess the true number between 1-5\n");
	do{
		printf("Choose a number: ");
		scanf("%d" , &guess);
		if (guess != theNumber) {
			printf("Nice try, but it's wrong. Try again: ");
		}
	} while (guess != theNumber);
	printf("Perceft. You found the correct number.\n");
	return 0;
}
