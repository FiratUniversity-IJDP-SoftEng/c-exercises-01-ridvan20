//Rıdvan Urhan
#include <stdio.h>
#include <string.h>
int main() {
	char a;
	printf("Do you pet a cat or a dog? \n");
	printf("Pres 'C or c' for cat or 'D or d' for dog : ");
	scanf("%c" , &a);
	if (a == 'c' || a == 'C') {
			printf("Miaw Miaw \n");
	}
	else if(a == 'd' || a == 'D') {
		printf("Hav hav \n");
	}
	else { 
	printf("You did not use any of character. Use correct characters\n");
	}
} 
