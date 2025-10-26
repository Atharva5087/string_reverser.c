#include <Stdio.h>

void reverseString(char str[]);

int main() {
	int length = 0;
	char string[250];
	
	printf("Enter a string :");
	fgets(string, sizeof(string), stdin);
	
	reverseString(string);
	
	return 0;
}

void reverseString(char str[]) {
	int length = 0;
	while(str[length] != '\0') {
		length++;
	}
	for(int i = length - 1; i >= 0; i--) {
		putchar(str[i]);
	}
	putchar('\n');
}

