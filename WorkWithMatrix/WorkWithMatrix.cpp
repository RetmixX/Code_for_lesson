//
// Created by james on 28.09.2022.
//

#include "WorkWithMatrix.h"
#include <iostream>

using namespace std;

int **createMatrix(int N, int M) {
    int **matrix = new int *[N];
    for (size_t i = 0; i < N; ++i) {
        matrix[i] = new int[M];
    }

    return matrix;
}

void printDynamicMatrix(int **matrix, int const N, int const M) {
    for (size_t i = 0; i < N; ++i) {
        for (size_t j = 0; j < M; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int **multipliesMatrix(int **firstArray, int **secondArray, int const N, int const M) {
    int **resultArray = new int *[N];

    for (size_t i = 0; i < N; ++i) {
        resultArray[i] = new int[M];
    }

    for (size_t i = 0; i < N; ++i) {
        for (size_t j = 0; j < M; ++j) {

            resultArray[i][j] = 0;
            for (size_t k = 0; k < N; ++k) {
                resultArray[i][j] += firstArray[i][k] * secondArray[k][j];
            }
        }
    }

    return resultArray;

}

int **additionMatrix(int **firstMatrix, int **secondMatrix, int N, int M) {
    int **resultMatrix = new int *[N];
    for (size_t i = 0; i < N; ++i) {
        resultMatrix[i] = new int[M];
    }

    for (size_t i = 0; i < N; ++i) {
        for (size_t j = 0; j < M; ++j) {
            resultMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
        }
    }

    return resultMatrix;
}

