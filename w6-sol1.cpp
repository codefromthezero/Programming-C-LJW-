#include <stdio.h>
#include <string.h>

void reverseString(char* s);

int main(void) {
	char str[100];
	char *delimiter=" ";
	
	gets(str);
	char* ptoken = strtok(str, delimiter);
	while (ptoken) {
		reverseString(ptoken);
    	printf("%s ", ptoken);
		ptoken=strtok(NULL, delimiter);
	}
	return 0;
}

void reverseString(char* s) {
    size_t size = strlen(s);
    char temp;

    for (size_t i = 0; i < size / 2; i++) {
        temp = s[i];
    	s[i] = s[(size - 1) - i];
    	s[(size - 1) - i] = temp;
    }
}
