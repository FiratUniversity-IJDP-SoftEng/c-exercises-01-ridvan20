//Rıdvan Urhan
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main(void) {
	char test[2000];
	printf("Test: ");
	if(fgets(test, sizeof(test), stdin) == NULL) {
		printf("Mistake about reading input.\n");
		return 1;
	}
	int letters = 0;
	int words = 0;
	int sentences = 0;
	int longht = strlen(test);
	if (longht > 0 && test[0] != '\n') {
		words = 1;
	}
for (int i = 0; i < longht; i++) {
	char c = test[i];
	for (int i = 0; i < longht; i++) {
		char c = test[i];
		if (isalpha(c)) {
			letters++;
		} else if (c == ' ') {
			sentences++;
		}
	}
	if (words == 0) {
		printf("before the grede 1\n");
		return 0;
	}
	float L = (float)letters / (float)words * 100.0;
	float S = (float)sentences / (float)words * 100.0;
	float index = 0.0588 * L - 0.296 * S - 15.8;
	int grades = (int)round(index);
	if (grades < 1) {
		printf("Before the grade 1\n");
	} else if (grades >= 16) {
		printf("Graedes 16+\n");
	} else {
		printf("Grades %d\n" , grades);
	}
	return 0;
}
}
