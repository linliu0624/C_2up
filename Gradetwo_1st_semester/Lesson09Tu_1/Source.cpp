#include<stdio.h>
#include<iostream>
using namespace std;
void main() {
	//----------%s顯示字串 %c顯示字元------
	char string[10] = { 'H','E','L','L','O','\n' };
	printf("%s", string);
	//-------這樣子這個字串就不能更改了--------
	char *p;
	p = "Hello \n";
	printf("%s", p);
	//-------這樣就可以-------
	char c[] = { 'a','p','p' ,'l','e','\n' };
	printf("%s", c);
	c = *p;
	printf("%s", c);
}