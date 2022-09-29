//
// Created by james on 28.09.2022.
//

#ifndef UNTITLED4_WORKWITHMATRIXT_H
#define UNTITLED4_WORKWITHMATRIXT_H

#include <iostream>

using namespace std;

template<typename T>
T **createMatrix(int N, int M) {
    T **matrix = new T *[N];
    for (size_t i = 0; i < N; ++i) {
        matrix[i] = new T[M];
    }

    return matrix;
}

template<typename T>
void printMatrix(T **matrix, int const N, int const M) {
    for (size_t i = 0; i < N; ++i) {
        for (size_t j = 0; j < M; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

template<typename T>
T **multipliesMatrix(T **firstArray, T **secondArray, int const N, int const M) {
    T **resultArray = new T *[N];

    for (size_t i = 0; i < N; ++i) {
        resultArray[i] = new T[M];
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

template<typename T>
T **additionMatrix(T **firstMatrix, T **secondMatrix, int N, int M) {
    T **resultMatrix = new T *[N];
    for (size_t i = 0; i < N; ++i) {
        resultMatrix[i] = new T[M];
    }

    for (size_t i = 0; i < N; ++i) {
        for (size_t j = 0; j < M; ++j) {
            resultMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
        }
    }

    return resultMatrix;
}

template<typename T>
void deleteMatrix(T **matrix, int N) {
    for (size_t i = 0; i < N; ++i) {
        delete[] matrix[i];
    }

    delete[] matrix;
}

#endif //UNTITLED4_WORKWITHMATRIXT_H
