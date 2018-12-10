#include <stdio.h>
double rate(void) {
	double val;
	printf("Input exchange rate (1 dollar --> ?? Yen: ");
	scanf_s("%d", &val);
	return val;
}

int main(void) {
	double amount = 12.54;//12ƒhƒ‹54ƒZƒ“ƒg
	int dollars, cents;
	double rate_value;

	rate_value = rate();//ˆø”‚È‚µ

	dollars = amount;
	cents = (amount - dollars) * 100;

	printf("%d dollars %d cents\n", dollars, cents);
}