#include<stdio.h>
int main() {
	int x;
	scanf_s("%d", &x);
	if (x % 3 == 0 or x % 5 == 0)
		printf("It can be divided by 3 or 5");
	else
		printf("It can't be divided by 3 or 5");
	return 0;
}