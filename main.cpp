#include <iostream>

void enterMatrix(float matrix[][4])
{
    std::cout << "Please enter the matrix row by row:\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
}

void multiplyVectorOnMatrix(float vector[], float matrix[][4], float result[])
{
    for (int i = 0; i < 4; i++)
    {
        int summ = 0;
        for (int j = 0; j < 4; j++)
        {
            summ += vector[i] * matrix[i][j];
        }
        result[i] = summ;
    }
}

void enterVector(float* array)
{
    std::cout << "Please enter the vector:\n";
    for (int i = 0; i < 4; i++)
    {
        std::cin >> array[i];
    }
}

void readVector(float array[])
{
    std::cout << "Vector:\n";
    for (int i = 0; i < 4; i++)
    {
        std::cout << array[i] << "\n";
    }
}

void readMatrix(float matrix[][4])
{
    std::cout << "The matrix:\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << "\n";
    }
}

//enter this into terminal for fast check:
//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16


int main()
{
    float vec[4];
    enterVector(vec);
    readVector(vec);

    float matrix[4][4];
    enterMatrix(matrix);
    readMatrix(matrix);

    float result[4];
    multiplyVectorOnMatrix(vec, matrix, result);
    readVector(result);
    //Matrix on vector multiplication
}
