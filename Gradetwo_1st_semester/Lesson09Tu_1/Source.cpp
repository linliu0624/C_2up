#include<stdio.h>
#include<iostream>
using namespace std;
void main() {
	//----------%sèû¦ø %cèû¦³------
	char string[10] = { 'H','E','L','L','O','\n' };
	printf("%s", string);
	//-------éqÂøAs\Xü¹--------
	char *p;
	p = "Hello \n";
	printf("%s", p);
	//-------éAÂÈ-------
	char c[] = { 'a','p','p' ,'l','e','\n' };
	printf("%s", c);
	c = *p;
	printf("%s", c);
}