#include<stdio.h>
#include<iostream>
using namespace std;
void main() {
	//----------%s�������� %c��������------
	char string[10] = { 'H','E','L','L','O','\n' };
	printf("%s", string);
	//-------����q�������A�s�\�X����--------
	char *p;
	p = "Hello \n";
	printf("%s", p);
	//-------����A��-------
	char c[] = { 'a','p','p' ,'l','e','\n' };
	printf("%s", c);
	c = *p;
	printf("%s", c);
}