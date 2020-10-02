/*Gerardo Arturo Valderrama Quiroz
* A01374994
* Assignment 03
* 01/09/2020
*/

#include <stdio.h>

//Ejercicio 1


void printer(double x, double y, double bubble) {
	int z = 5;
	printf("x = %.2f and y = %.1f\n", x, y);
	printf("x = %.2f and y = %.4f\n", x, bubble);
	printf("The value from main is: %.4f\n", bubble);
	printf("z = %d\n", z);
}

int main(void) {

	double bubble = 867.5309;
	double y = 8.01;
	double x = 10.01;
	printer(x, y, bubble);
	return 0;
}

//Ejercicio 2

void displayString(char str[], int times) {
	for (int i = 0; i < times; i++) {
		printf("%s", str);
	}

}

int main(void) {
	int times;
	scanf_s("%d\n", &times);
	char str[50];
	gets(str);
	displayString(str, times);
	return 0;
}

//Ejercicio 3
double ftoc(double tempf, double tempc) {
	tempc = (tempf - 32) * 5 / 9;
	return tempc;
}

int main(void) {

	double tempf = 98.6;
	double tempc = 0.0;
	double temp = ftoc(tempf, tempc);
	printf("Body temp in C is: %.1f", temp);
	return 0;
}

//Ejercicio 4

int min(int a, int b, int c) {
	int min;
	min = (a < b&& a < c) ? a : (b < a&& b < c) ? b : c;
	return min;
}

int main(void) {

	int a, b, c;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	printf("%d", min(a, b, c));
	return 0;
}

//Ejercicio 5

int countQuarters(int cents) {
	int remCents = cents % 100;
	int quarters = remCents / 25;
	return quarters;
}

int main(void) {

	int cents;
	scanf("%d", &cents);
	printf("%d", countQuarters(cents));
	return 0;
}

//Ejercicio 6

int main(void) {
	int a;
	scanf_s("%d", &a);
	printf("%d times 2 = %d", a, a * 2);
	return 0;
}

//Ejercicio 7

int main(void) {
	int low, high, sum = 0;
	scanf_s("%d", &low);
	scanf_s("%d", &high);
	for (int i = low; i <= high; i++) {
		sum += i;
	}
	printf("low? high? sum = %d", sum);
	return 0;
}

//Ejercicio 8

void printNumbers(int a) {
	for (int i = 1; i <= a; i++) {
		printf("[%d] ", i);
	}
}

int main(void) {
	int a;
	scanf_s("%d", &a);
	printNumbers(a);
	return 0;
}

//Ejercicio 9

void printPowersOf2(int a) {
	int mult;
	for (int i = 0; i <= a; i++) {
		if (i == 0) {
			mult = 1;
		}
		else {
			for (int j = 1; j <= i; j++) {
				mult *= 2;
			}
		}
		printf("%d ", mult);
		mult = 1;
	}
}

int main(void) {
	int a;
	scanf_s("%d", &a);
	printPowersOf2(a);
	return 0;
}

//Ejercicio 10

void printPowersOfN(int base, int exp) {
	int mult;
	for (int i = 0; i <= exp; i++) {
		if (i == 0) {
			mult = 1;
		}
		else {
			for (int j = 1; j <= i; j++) {
				mult *= base;
			}
		}
		printf("%d ", mult);
		mult = 1;
	}
}

int main(void) {
	int base, exp;
	scanf_s("%d", &base);
	scanf_s("%d", &exp);
	printPowersOfN(base, exp);
	return 0;
}

//Ejercicio 11

void printSquare(int min, int max) {
	int start = 1;
	for (int i = min; i <= max; i++) {
		for (int j = i; j <= max; j++) {
			printf("%d", j);
		}
		for (int j = min; j < i; j++) {
			printf("%d", j);
		}
		start++;
		printf("\n");
	}
}

int main(void) {
	int min, max;
	scanf_s("%d", &min);
	scanf_s("%d", &max);
	printSquare(min, max);
	return 0;
}

//Ejercicio 12
#include <stdio.h>

void printGrid(int row, int col) {
	for (int i = 1; i <= row; i++) {
		for (int j = 0; j < col; j++) {
			if (j == col - 1) {
				printf("%d\n", (i + row * j));
			}
			else {
				printf("%d, ", (i + row * j));
			}
		}
	}
}

int main(void) {
	int row, col;
	scanf("%d", &row);
	scanf("%d", &col);
	printGrid(row, col);
	return 0;
}

//Ejercicio 13

#include <stdlib.h>

int largerAbsVal(int a, int b) {
	int larger = (abs(a) < abs(b)) ? abs(b) : abs(a);
	return larger;
}

int main(void) {
	int a, b;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("%d", largerAbsVal(a, b));
	return 0;
}
