//
// Created by james on 28.09.2022.
//

#ifndef UNTITLED4_WORKWITHMATRIX_H
#define UNTITLED4_WORKWITHMATRIX_H
#include <iostream>

using namespace std;

int **createMatrix(int N, int M);

void printMatrix(int **matrix, int const N, int const M);

int **multipliesMatrix(int **firstArray, int **secondArray, int const N, int const M);

int **additionMatrix(int **firstMatrix, int **secondMatrix, int N, int M);

void deleteMatrix(int **matrix, int N);

#endif //UNTITLED4_WORKWITHMATRIX_H
