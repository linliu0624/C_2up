#include <stdio.h>

void main(void) {
	int amount, price, totalPrice, totalPriceWithoutTax;

	printf("Please type amount:");
	scanf_s("%d", &amount);
	printf("Please type price:");
	scanf_s("%d", &price);

	totalPriceWithoutTax = amount*price;
	totalPrice = amount*price*1.08;

	printf("total price without tax=%d\n", totalPriceWithoutTax);
	printf("total price=%d\n", totalPrice);
}