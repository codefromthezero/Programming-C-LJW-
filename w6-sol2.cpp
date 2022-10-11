#include <stdio.h>
#include <string.h>

int main(void) {
	char str[100];
	int str_cnt;
	size_t length=0;
	gets(str);
	
	length=strlen(str);
	for (str_cnt=0; str_cnt<length; str_cnt++) {
		if (str[str_cnt]>='A' && str[str_cnt]<='Z')
			str[str_cnt]+=('a'-'A');
		else if (str[str_cnt]>='a' && str[str_cnt]<='z')
			str[str_cnt]-=('a'-'A');
	}
	printf("%s", str);
	return 0;
}
