#include <stdio.h>
#include <Windows.h>
#include <math.h>

int calc() {
	double a, b;

	char n;

	printf("Plus '+'\n");
	printf("Minus '-'\n");
	printf("Multiply '*'\n");
	printf("Divide '/'\n");
	printf("Power '^'\n");
	printf("Any power root '?' ----- Example: 4-number?2-root power\n");
	printf("Input: ");
	if (scanf_s("%f%c%f", &a, &n, 1, &b, 1) != 3) {
		printf("error\n");
		return 0;
	}
	

	switch (n) {
	case '+':
		return a + b;
		break;
	case '-':
		return a - b;
		break;
	case '*':
		return a * b;
		break;
	case '/':
		if (b != 0) {
			return a / b;
		}
		else {
			printf("cannot divide by zero\n");
		}
		break;
	case '^':
		return pow(a, b);
		break;
	case '?':
		return pow(a, static_cast<double>(1)/b);
		break;
	

	}
}


void main() {
	int result = calc();
	printf("The result is: %d\n", result);
}