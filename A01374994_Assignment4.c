/*Gerardo Arturo Valderrama Quiroz
* A01374994
* Assignment 04
* 06/09/2020
*/

#include <stdio.h>
#include <stdlib.h>

//Ejercicio 1

int main(void) {
	int number;
	scanf_s("%d", &number);

	if (number % 2 == 0) {
		printf("even");
	}
	else {
		printf("odd");
	}

	return 0;
}

//Ejercicio 2

void countFactors(int number) {
	int factors = 0;
	for (int i = 1; i <= number; i++) {
		if (number % i == 0) {
			factors++;
		}
	}

	printf("%d", factors);
}

int main(void) {
	int number;
	scanf_s("%d", &number);

	countFactors(number);

	return 0;
}

//Ejercicio 3

void median(int a, int b, int c) {
	int median;
	median = ((a < b || a < c) && (a > b || a > c)) ? a : ((b < a || b < c) && (b > a || b > c)) ? b : c;
	printf("%d", median);
}

int main(void) {
	int a, b, c;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);

	median(a, b, c);

	return 0;
}

//Ejercicio 4 

void getLabel(int month, int day) {
	if (month >= 3 && month <= 6) {
		if (month == 3 && day < 16) {
			printf("Winter");
		}
		else if (month == 6 && day >= 16) {
			printf("Summer");
		}
		else {
			printf("Spring");
		}

	}
	else if (month >= 6 && month <= 9) {
		if (month == 6 && day < 16) {
			printf("Spring");
		}
		else if (month == 9 && day >= 16) {
			printf("Fall");
		}
		else {
			printf("Summer");
		}
	}
	else if (month >= 9 && month <= 12) {
		if (month == 9 && day < 16) {
			printf("Summer");
		}
		else if (month == 12 && day >= 16) {
			printf("Winter");
		}
		else {
			printf("Fall");
		}
	}
	else {
		if (month == 12 && day < 16) {
			printf("Fall");
		}
		else if (month == 3 && day >= 16) {
			printf("Spring");
		}
		else {
			printf("Winter");
		}
	}
}

int main(void) {
	int month, day;
	scanf_s("%d", &month);
	scanf_s("%d", &day);
	getLabel(month, day);
	return 0;
}

//Ejercicio 5

void printRange(int a, int b) {
	if (a <= b) {
		for (int i = a; i <= b; i++) {
			if (i == b) {
				printf("%d", i);
			}
			else {
				printf("%d ", i);
			}
		}
	}
	else {
		for (int i = a; i >= b; i--) {
			if (i == b) {
				printf("%d", i);
			}
			else {
				printf("%d ", i);
			}
		}
	}
}

int main(void) {
	int a, b;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printRange(a, b);
	return 0;
}

//Ejercicio 6

void xo(int a) {
	int counter = 0;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			if (counter == j || a - (counter + 1) == j) {
				printf("x");
			}
			else {
				printf("o");
			}
		}
		counter++;
		printf("\n");
	}
}

int main(void) {
	int a;
	scanf_s("%d", &a);
	xo(a);
	return 0;
}

//Ejercicio 7

void printTriangleType(int a, int b, int c) {
	if (a == b && b == c) {
		printf("equilateral");
	}
	else if (a != b && b != c && a != c) {
		printf("scalene");
	}
	else {
		printf("isosceles");
	}

}

int main(void) {
	int a, b, c;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	printTriangleType(a, b, c);
	return 0;
}

//Ejercicio 8

int quadrant(double a, double b) {
	if (a == 0 || b == 0) {
		return 0;
	}
	else if (a > 0) {
		if (b > 0) {
			return 1;
		}
		else {
			return 4;
		}
	}
	else if (a < 0) {
		if (b > 0) {
			return 2;
		}
		else {
			return 3;
		}
	}
}

int main(void) {
	double a, b;
	scanf_s("%lf", &a);
	scanf_s("%lf", &b);
	printf("%d", quadrant(a, b));
	return 0;
}

//Ejercicio 9

void perfectNumbers(int num) {
	printf("Perfect numbers up to %d:", num);
	int sum, factor;
	for (int i = 1; i <= num; i++) {
		factor = 1;
		sum = 0;
		while (factor < i) {
			if (i % factor == 0) {
				sum = sum + factor;
			}
			factor++;
		}
		if (sum == i)
			printf(" %d", i);
	}
}

int  main(void) {
	int num;
	scanf_s("%d", &num);
	perfectNumbers(num);
	return 0;
}

//Ejercicio 10

int zeroDigits(int number) {
	int digit;
	int counter = 0;
	if (number == 0) {
		return 1;
	}
	else {
		for (int i = number; i > 0; i /= 10) {
			digit = i % 10;
			if (digit == 0) {
				counter++;
			}
		}
		return counter;
	}
}

int main(void) {
	int number;
	scanf_s("%d", &number);
	printf("%d", zeroDigits(number));
	return 0;
}

//Ejercicio 11

int showTwos(int number) {
	int counter = 0;
	int division = number;
	while (division % 2 == 0) {
		counter++;
		division /= 2;
	}
	printf("%d = ", number);
	for (int i = 0; i < counter; i++) {
		printf("2 * ");
	}
	printf("%d", division);
}

int main(void) {
	int number;
	scanf_s("%d", &number);
	showTwos(number);
	return 0;
}

//Ejercicio 12

int euclides(int a, int b) {
	int gdc, div, res;
	div = a / b;
	res = a % b;
	while (res != 0) {
		a = b;
		b = res;
		div = a / b;
		res = a % b;
	}
	gdc = b;
	return gdc;
}

int gdcCount(int a) {
	int gdc1 = 0;
	for (int i = 1; i <= a; i++) {
		if (euclides(i, a) == 1) {
			gdc1++;
		}
	}
	return gdc1;
}

int main(void) {
	int a;
	scanf_s("%d", &a);
	printf("%d", gdcCount(a));
	return 0;
}

//Ejercicio 13

void hopscotch(int a) {
	int count = 1;
	for (int i = 0; i < a; i++) {
		printf("   %d   \n", count);
		printf("%d     %d\n", count + 1, count + 2);
		count += 3;
	}
	printf("   %d", count);
}

int main(void) {
	int a;
	scanf_s("%d", &a);
	hopscotch(a);
	return 0;
}

//Ejercicio 14

char* midpoint(int a, int b, int c) {
	if (a != b && b != c && a != c) {
		if ((abs(a - b) == abs(b - c)) || (abs(a - b) == abs(a - c)) || (abs(a - c) == abs(b - c))) {
			return "true";
		}
		else {
			return "false";
		}
	}
	else {
		return "false";
	}
}

int main(void) {
	int a, b, c;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	printf("%s", midpoint(a, b, c));
	return 0;
}

//Ejercicio 15

int digitSum(int number) {
	int digit;
	int counter = 0;
	if (number == 0) {
		return 0;
	}
	else {
		for (int i = number; i > 0; i /= 10) {
			digit = i % 10;
			counter += digit;
		}
		return counter;
	}
}

int main(void) {
	int number;
	scanf_s("%d", &number);
	printf("%d", digitSum(abs(number)));
	return 0;
}

//Ejercicio 16

int digitSum(int number) {
	int digit;
	int counter = 0;
	int max = number % 10;
	int min = number % 10;
	for (int i = number; i > 0; i /= 10) {
		digit = i % 10;
		if (digit > max) {
			max = digit;
		}
		else if (digit < min) {
			min = digit;
		}
	}
	return (max - min + 1);
}

int main(void) {
	int number;
	scanf_s("%d", &number);
	printf("%d", digitSum(abs(number)));
	return 0;
}

//Ejercicio 17

int digitSum(int number) {
	int reverseNum = 0;
	int digitCount = 0;
	int invertedNum = 0;
	int a;
	while (number > 0) {
		reverseNum = reverseNum * 10 + number % 10;
		number = number / 10;
		digitCount++;
	}
	if (digitCount % 2 != 0) {
		invertedNum = invertedNum * 10 + reverseNum % 10;
		reverseNum = reverseNum / 10;
	}
	while (reverseNum > 0) {
		a = reverseNum % 10;
		reverseNum = reverseNum / 10;
		invertedNum = invertedNum * 10 + reverseNum % 10;
		invertedNum = invertedNum * 10 + a;
		reverseNum = reverseNum / 10;
	}
	return invertedNum;
}

int main(void) {
	int number;
	scanf_s("%d", &number);
	printf("%d", digitSum(number));
	return 0;
}
