#include <stdio.h>
#include <string.h>
#pragma warning( disable : 4996 )
void mystrcat(char *st1, char *st2, char *st) {
	int n = 0;
	int m = 0;
	/*strcat(st, st1);
	strcat(st, st2);*/
	while (st1[m] != '\0')
	{
		st[m] = st1[m];
		m++;
	}
	while (st2[n] != '\0')
	{
		st[m++] = st2[n++];
	}
}

int main() {
	char st1[10] = "aaa", st2[10] = "BBB", st[20] = {};
	mystrcat(st1, st2, st);
	printf("%s\n", st);
}