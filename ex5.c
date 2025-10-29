//Rıdvan Urhan
#include <stdio.h>
void sayHi(const char* name) {
	printf("Hi, %s!\n" , name);
}
int main() {
	char names[50];
	printf("Can you enter your name plaese: ");
	scanf("%49s" , names);
	sayHi(names);
}
