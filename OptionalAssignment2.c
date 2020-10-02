//Gerardo ArturoValderrama Quiroz
//A01374994
//02/09/2020

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//Método común para encontrar los puntos mas cercanos
void nestedLoopsAlgorithm() {
    //Iniciar el tiempo
    clock_t beginPoints = clock();
    
    //Crear el arreglo y poblarlo con valores al azar
    int dataPoints[10000][2];
    for (int i = 0; i < 10000; ++i) {
        for (int j = 0; j < 2; ++j) {
            dataPoints[i][j] = rand();
        }
    }

    //Buscar el set de puntos mas cercanos entre ellos
    double nearestDistance = sqrt(pow(dataPoints[0][0] - dataPoints[1][0], 2.0) + pow(dataPoints[0][1] - dataPoints[1][1], 2.0));
    int puntoA[2];
    int puntoB[2];

    for (int i = 0; i < 10000; ++i) {
        for (int j = 0; j < 10000; ++j) {
            if(dataPoints[i][0] == dataPoints[j][0] && dataPoints[i][1] == dataPoints[j][1]){
                continue;
            }
            else {
                double distance = sqrt(pow(dataPoints[i][0] - dataPoints[j][0], 2.0) + pow(dataPoints[i][1] - dataPoints[j][1], 2.0));
                if (distance < nearestDistance) {
                        nearestDistance = distance;
                        for (int k = 0; k < 2; ++k) {
                            puntoA[k] = dataPoints[i][k];
                            puntoB[k] = dataPoints[j][k];
                        }
                }
            }

        }
    }

    //Terminar el tiempo y calcular los segundos
    clock_t endPoints = clock();
    double timeSpentPoints = (double)(endPoints - beginPoints) / CLOCKS_PER_SEC;

    printf("El tiempo requerido fue: %f seconds.\n", timeSpentPoints);
    printf("Los puntos mas cercanos son A[%d, %d] y B[%d, %d].\n", puntoA[0], puntoA[1], puntoB[0], puntoB[1]);
}

//Métoto mejorado para encontrar puntos mas cercanos (reducción aprox. del 50% del tiempo)
void fasterAlgorithm() {
    //Iniciar el tiempo
    clock_t beginPoints = clock();

    //Crear el arreglo y poblarlo con valores al azar
    int dataPoints[10000][2];
    for (int i = 0; i < 10000; ++i) {
        for (int j = 0; j < 2; ++j) {
            dataPoints[i][j] = rand();
        }
    }

    //Buscar el set de puntos mas cercanos entre ellos
    double nearestDistance = sqrt(pow(dataPoints[0][0] - dataPoints[1][0], 2.0) + pow(dataPoints[0][1] - dataPoints[1][1], 2.0));
    int puntoA[2];
    int puntoB[2];

    for (int i = 0; i < 10000; ++i) {
        for (int j = i+1; j < 10000; ++j) {       
            double distance = sqrt(pow(dataPoints[i][0] - dataPoints[j][0], 2.0) + pow(dataPoints[i][1] - dataPoints[j][1], 2.0));
            if (distance < nearestDistance) {
                nearestDistance = distance;
                for (int k = 0; k < 2; ++k) {
                    puntoA[k] = dataPoints[i][k];
                    puntoB[k] = dataPoints[j][k];
                }
            }
        }
    }

    //Terminar el tiempo y calcular los segundos
    clock_t endPoints = clock();
    double timeSpentPoints = (double)(endPoints - beginPoints) / CLOCKS_PER_SEC;

    printf("El tiempo requerido fue: %f seconds.\n", timeSpentPoints);
    printf("Los puntos mas cercanos son A[%d, %d] y B[%d, %d].\n", puntoA[0], puntoA[1], puntoB[0], puntoB[1]);
}


int main() {
    nestedLoopsAlgorithm();
    fasterAlgorithm();
    return 0;
}