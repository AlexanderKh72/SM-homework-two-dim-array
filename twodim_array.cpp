// twodim_array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

const int N_COL{ 5 }, N_ROW{ 10 }, W{ 4 };

void create(int**& a, int n_row, int n_col)
{
    a = new int* [n_row];
    for (int i = 0; i < n_row; ++i)
        a[i] = new int[n_col];
}

void fill(int* const* a, int n_row, int n_col)
{
    for (int i = 0; i < n_row; ++i)
        for (int j = 0; j < n_col; ++j)
            a[i][j] = i + j;
}

void print(int const* const* a, int n_row, int n_col)
{
    for (int i = 0; i < n_row; ++i, std::cout << std::endl)
        for (int j = 0; j < n_col; ++j)
            std::cout << std::setw(W) << a[i][j];
}

void clear(int** a, int n_row)
{
    for (int i = 0; i < n_row; ++i)
        delete[] a[i];
    delete[] a;
}

int main()
{
    int** a;
    create(a, N_ROW, N_COL);
    fill(a, N_ROW, N_COL);
    print(a, N_ROW, N_COL);
    clear(a, N_ROW);
    return 0;
}
