/*Gerardo Arturo Valderrama Quiroz*/
/*A01374994*/
/*Programacion Avanzada*/
/*Assignment 5*/
/*13/09/2020*/

//Ejercicio 1

#include <stdio.h>

int palindrobits(int num) {
    int numCopy = num;
    int reversedNum = 0;
    int sigBit;

    while (numCopy > 0) {
        reversedNum <<= 1;
        sigBit = numCopy & 1;
        reversedNum |= sigBit;
        numCopy >>= 1;
    }

    if (reversedNum == num) {
        return 1;
    }
    else {
        return 0;
    }
}

int  main(void) {
    unsigned num;
    scanf_s("%u", &num);
    printf("%u", palindrobits(num));
}

//Ejercicio 2

#include <stdio.h>

int countOnes(int num) {
    int numCopy = num;
    int sigBit;
    int count = 0;

    while (num > 0) {
        sigBit = num & 1;
        if (sigBit == 1) {
            count++;
        }
        num >>= 1;
    }

    return count;
}

int  main(void) {
    int num;
    scanf_s("%d", &num);
    printf("%d", countOnes(num));
}

//Ejercicio 3

#include <stdio.h>

int countOnes(int num) {
    int numCopy = num;
    int sigBit;
    int count = 0;

    while (num > 0) {
        sigBit = num & 1;
        if (sigBit == 1) {
            count++;
        }
        num >>= 1;
    }

    return count;
}

int cmp_bits(int a, int b) {
    if (a < 0) {
        a = 0 - a;
    }
    else if (b < 0) {
        b = 0 - b;
    }
    int countA = countOnes(a);
    int countB = countOnes(b);

    if (countA < countB) {
        return -1;
    }
    else if (countA > countB) {
        return 1;
    }
    else {
        return 0;
    }

}

int  main(void) {
    int numA, numB;
    scanf_s("%d", &numA);
    scanf_s("%d", &numB);
    printf("%d", cmp_bits(numA, numB));
}

//Ejercicio 4

#include <stdio.h>

int invertBits(int num, int startPos, int numBits) {
    int mask = 1;

    for (int i = startPos; i < startPos + numBits; i++) {
        for (int j = 1; j <= i; j++) {
            mask *= 2;;
        }
        num ^= mask;
        mask = 1;
    }
    return num;

}

int  main(void) {
    int numA, numB, numC;
    scanf_s("%d", &numA);
    scanf_s("%d", &numB);
    scanf_s("%d", &numC);
    printf("%d", invertBits(numA, numB, numC));
}

//Ejercicio 5

#include <stdio.h>
#include <math.h>

unsigned circularLeftShift(unsigned num, unsigned times) {
    unsigned mask = pow(2, 31);
    unsigned actualBit;

    while (times > 0) {
        actualBit = num & mask;
        num <<= 1;
        if (actualBit > 0) {
            num += 1;
        }
        times--;
    }
    return num;
}

int  main(void) {
    unsigned numA, numB;
    scanf_s("%u", &numA);
    scanf_s("%u", &numB);
    printf("%u", circularLeftShift(numA, numB));
}

//Ejercicio 6

#include <stdio.h>
#include <math.h>

unsigned circularRightShift(unsigned num, unsigned times) {
    unsigned mask = 1;
    unsigned actualBit;

    while (times > 0) {
        actualBit = num & mask;
        num >>= 1;
        if (actualBit > 0) {
            num += pow(2, 31);
        }
        times--;
    }
    return num;
}

int  main(void) {
    unsigned numA, numB;
    scanf_s("%u", &numA);
    scanf_s("%u", &numB);
    printf("%u", circularRightShift(numA, numB));
}

//Ejercicio 7
#include <stdio.h>
#include <math.h>

unsigned swapBits(unsigned num, unsigned a, unsigned b) {
    unsigned posA, posB;
    if (a > b) {
        posA = a;
        posB = b;
    }
    else if (a < b) {
        posA = b;
        posB = a;
    }
    else {
        return num;
    }
    unsigned maskA = pow(2, posA);
    unsigned maskB = pow(2, posB);
    unsigned bitA = num & maskA;
    unsigned bitB = num & maskB;
    unsigned distance = posA - posB;
    bitA >>= distance;
    bitB <<= distance;

    if (bitA > 0) {
        num |= bitA;
    }
    else {
        int comp = ~maskB;
        num &= comp;
    }
    if (bitB > 0) {
        num |= bitB;
    }
    else {
        int comp = ~maskA;
        num &= comp;
    }
    return num;
}

int  main(void) {
    unsigned numA, numB, numC;
    scanf_s("%u", &numA);
    scanf_s("%u", &numB);
    scanf_s("%u", &numC);
    printf("%u", swapBits(numA, numB, numC));
}

//Ejercicio 8
#include <stdio.h>
#include <math.h>

unsigned swapBits(unsigned num, unsigned a, unsigned b) {
    unsigned posA = a, posB = b;
    unsigned maskA = pow(2, posA);
    unsigned maskB = pow(2, posB);
    unsigned bitA = num & maskA;
    unsigned bitB = num & maskB;
    unsigned distance = posA - posB;
    bitA >>= distance;
    bitB <<= distance;

    if (bitA > 0) {
        num |= bitA;
    }
    else {
        int comp = ~maskB;
        num &= comp;
    }
    if (bitB > 0) {
        num |= bitB;
    }
    else {
        int comp = ~maskA;
        num &= comp;
    }
    return num;
}

unsigned multipleSwaps(unsigned num, unsigned a, unsigned b) {
    unsigned posA, posB;
    int finalNum = num;
    if (a > b) {
        posA = a;
        posB = b;
    }
    else if (a < b) {
        posA = b;
        posB = a;
    }
    else {
        return num;
    }
    int limit = posB + 1 + (posA - posB) / 2;

    while (posB < limit) {
        finalNum = swapBits(finalNum, posA, posB);
        posA -= 1;
        posB += 1;
    }
    return finalNum;
}

int  main(void) {
    unsigned numA, numB, numC;
    scanf_s("%u", &numA);
    scanf_s("%u", &numB);
    scanf_s("%u", &numC);
    printf("%u", multipleSwaps(numA, numB, numC));
}

//Ejercicio 9
#include <stdio.h>

int fourInOne(unsigned a, unsigned b, unsigned c, unsigned d) {
    unsigned finalnum = 0;

    for (int i = 0; i < 4; i++) {
        switch (i) {
        case 0:
            finalnum |= d;
            break;
        case 1:
            finalnum <<= 8;
            finalnum |= c;
            break;
        case 2:
            finalnum <<= 8;
            finalnum |= b;
            break;
        case 3:
            finalnum <<= 8;
            finalnum |= a;
            break;
        }
    }
    return finalnum;
}

int  main(void) {
    unsigned numA, numB, numC, numD;
    scanf_s("%u", &numA);
    scanf_s("%u", &numB);
    scanf_s("%u", &numC);
    scanf_s("%u", &numD);
    printf("%u", fourInOne(numA, numB, numC, numD));
}

