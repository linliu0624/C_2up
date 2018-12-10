#include <stdio.h>
#include <ctype.h>
void main() {
	char c;
	int flag = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n');
		{
			putchar(c);
			flag = 0;
			continue;
		}
		if (flag == 0) {
			if (!isupper(c))
			{
				c = toupper(c);
			}
			flag = 1;
		}
		putchar(c);
	}
	printf("%s", c);
}
