#include <stdio.h>
#include <stdarg.h>
#include "A01374994_Test1_header.h"

void main()
{
	printf("Prueba con 0 parametros: %u\n", test0ParametersCodePairBits());
	printf("Prueba con 3 parametros %u\n", test3ParametersCodePairBits());
	printf("Prueba con 18 parametros %u\n", test18ParametersCodePairBits());
}

int codePairBits(int numParameters, ...) {
	va_list enteredParams;
	unsigned int codedNumber = 0;
	unsigned short int newParam;
	unsigned short int mask1, mask2;
	int paramPosition = 0;
	int codedPosition = 0;

	if (numParameters > 16) {
		numParameters = 16;
	}

	va_start(enteredParams, numParameters);

	for (int i = 0; i < numParameters; i++) {

		newParam = va_arg(enteredParams, unsigned short int);
		
		mask1 = 1 & (newParam >> paramPosition);
		mask2 = 1 & (newParam >> paramPosition + 1);
		codedNumber ^= (mask1 << codedPosition);
		codedNumber ^= (mask2 << codedPosition + 1);
		paramPosition += 2;
		codedPosition += 2;

		if (paramPosition == 16) {
			paramPosition = 0;
		}

	}

	va_end(enteredParams);

	return codedNumber;
 }

int test0ParametersCodePairBits() {
	return codePairBits(0) == 0x0;
}

int test3ParametersCodePairBits() {
	return codePairBits(3, 2, 4, 16) == 0x16;
}

int test18ParametersCodePairBits() {
	return codePairBits(18, 65535, 65535, 65535, 65535, 65535,
		65535, 65535, 65535, 65535, 65535,
		65535, 65535, 65535, 65535, 65535,
		65535, 0, 0) == 0xFFFFFFFF;
}


