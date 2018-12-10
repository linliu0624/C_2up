#include<iostream>  
#include<stdio.h>
#include<string>  
#include<sstream>  
#pragma warning( disable : 4996 )
using namespace std;

void swap(int *p, int *q) {
	int tmp;
	tmp = *p;
	*p = *q;
	*q = tmp;
}
int main() {
	int a = 3, b = 4;
	swap(&a, &b);
	printf("a=%d, b=%d\n");
}