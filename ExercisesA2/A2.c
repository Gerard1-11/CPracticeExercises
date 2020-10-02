/*Gerardo Arturo Valderrama Quiroz
* A01374994
* Assignment 02
* 24/08/2020
*/

#include <stdio.h>

//Ejercicio 1

int main() {

	int i = -4;

	for (int j = 0; j < 6; j++) {
		printf("%d\n", i);
		i += 18;
	}
	return 0;
}

//Ejercicio 2

int main() {

	int j = 0;

	for (int i = 1; i < 5; i++) {
		j = 2 * i;
		printf("2 times %d = %d\n", i, j);
	}
	return 0;
}

//Ejercicio 3


int main() {
	int number;
	scanf_s("%d", &number);
	int lastDigits = number % 1000;
	printf("%d\n", lastDigits);
	return 0;
}

//Ejercicio 4


int main() {

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			printf("u");
		}
		printf("\n");
	}
	return 0;
}

// Ejercicio 5

int main() {

	for (int i = 0; i < 40; i++) {
		printf("-");
	}
	printf("\n");

	for (int j = 0; j < 10; j++) {
		printf("_-^-");
	}
	printf("\n");
	for (int k = 0; k < 2; k++) {
		for (int i = 1; i <= 10; i++) {
			for (int k = 0; k < 2; k++) {
				int number = i % 10;
				printf("%d", number);
			}
		}
	}
	printf("\n");

	for (int l = 0; l < 40; l++) {
		printf("-");
	}
	printf("\n");

	return 0;
}


//Ejercicio 6

int main() {

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 3; k++) {
				printf("%d", j);
			}
		}
		printf("\n");
	}
	return 0;
}

//Ejercicio 7


void printDesign() {
	for (int i = 5; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			printf("-");
		}
		int n = ((5 - i) * 2) + 1;
		for (int j = n; j > 0; j--) {
			printf("%d", n);
		}
		for (int k = i; k > 0; k--) {
			printf("-");
		}
		printf("\n");
	}
}

int main() {
	printDesign();
	return 0;
}


//Ejercicio 8

int main() {
	int level = 6;
	for (int i = 0; i < level; i++) {
		int num1 = ((level - i) * 4) - 2;
		for (int j = 0; j < (i * 2); j++) {
			printf("\\");
		}
		for (int j = 0; j < num1; j++) {
			printf("!");
		}
		for (int j = 0; j < (i * 2); j++) {
			printf("/");
		}
		printf("\n");
	}
	return 0;
}

//Ejercicio 9

int main() {
	int level;
	scanf_s("%d", &level);
	for (int i = 0; i < level; i++) {
		int num1 = ((level - i) * 4) - 2;
		for (int j = 0; j < (i * 2); j++) {
			printf("\\");
		}
		for (int j = 0; j < num1; j++) {
			printf("!");
		}
		for (int j = 0; j < (i * 2); j++) {
			printf("/");
		}
		printf("\n");
	}
	return 0;
}

//Ejercicio 10

int main() {
	int level = 7;
	for (int i = 0; i < level; i++) {
		int num1 = (level - i);
		for (int j = 0; j < (i * 2); j++) {
			printf("*");
		}

		for (int j = 0; j < num1; j++) {
			printf("$");
		}

		for (int j = 0; j < num1 * 2; j++) {
			printf("*");
		}

		for (int j = 0; j < num1; j++) {
			printf("$");
		}

		for (int j = 0; j < (i * 2); j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

//Ejercicio 11


void createTriangle(int times) {
	for (int i = 0; i < 3; i++) {
		int outSpace = 3 - i;
		int inSpace = i * 2;
		for (int i = 0; i < times; i++) {
			for (int j = 0; j < outSpace; j++) {
				printf(" ");
			}
			printf("/");
			for (int k = 0; k < inSpace; k++) {
				printf(" ");
			}
			printf("\\");
			for (int l = 0; l < outSpace; l++) {
				printf(" ");
			}
			printf(" ");
		}
		printf(" \n");
	}
}

void createDivision(int times) {
	for (int i = 0; i < times; i++) {
		printf("+");
		for (int i = 0; i < 6; i++) {
			printf("-");
		}
		printf("+ ");
	}
	printf(" \n");
}

void createWall(int times) {
	for (int j = 0; j < 2; j++) {
		for (int i = 0; i < times; i++) {
			printf("|");
			for (int i = 0; i < 6; i++) {
				printf(" ");
			}
			printf("| ");
		}
		printf(" \n");
	}
}

void createSign(int times) {
	for (int j = 0; j < 2; j++) {
		for (int i = 0; i < times; i++) {
			printf("|");
			if (j == 0) {
				printf(" Viva ");
			}
			else {
				printf("Mexico");
			}
			printf("| ");
		}
		printf("\n");
	}
}

void createRockets(int times) {
	createTriangle(times);
	createDivision(times);
	createWall(times);
	createDivision(times);
	createSign(times);
	createDivision(times);
	createWall(times);
	createDivision(times);
	createTriangle(times);
}

int main() {
	int times;
	scanf_s("%d", &times);
	createRockets(times);
	return 0;
}

//Ejercicio 12

int main() {
	int times = 6;
	for (int j = 0; j < times; j++) {
		for (int i = 1; i < 9; i++) {
			printf(" ");
		}
		printf("| ");
	}
	printf("\n");
	for (int j = 0; j < times; j++) {
		for (int i = 1; i <= 10; i++) {
			int number = i % 10;
			printf("%d", number);
		}
	}
	return 0;
}
