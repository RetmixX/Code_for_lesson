#include <iostream>
#include "WorkWithMatrix/WorkWithMatrix.h"
#include <ctime>

using namespace std;

int main() {

    setlocale(LC_ALL, "");
    srand(time(NULL));

    int N, M;

    cout << "Введите N: ";
    cin >> N;
    cout << "Введите M: ";
    cin >> M;

    if (N != M) {
        cout << "N!=M";
        exit(1);
    }

    //Create two matrix in heap
    int **firstArray = createMatrix(N, M);
    int **secondArray = createMatrix(N, M);

    //Filling in matrix data
    for (size_t i = 0; i < N; ++i) {
        for (size_t j = 0; j < M; ++j) {
            firstArray[i][j] = rand() % 3 + 3;
            secondArray[i][j] = rand() % 3 + 3;
        }
    }

    cout << "Первая матрица\n";
    printMatrix(firstArray, N, M);
    cout << endl;

    cout << "Вторая матрица\n";
    printMatrix(secondArray, N, M);
    cout << endl;

    int **resultMatrix = additionMatrix(firstArray, secondArray, N, M);

    cout << "Результат\n";

    printMatrix(resultMatrix, N, M);

    //Clear memory
    deleteMatrix(firstArray, N);
    deleteMatrix(secondArray, N);
    deleteMatrix(resultMatrix, N);

    return 0;
}