// twodim_array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

const int N_COL{ 5 }, N_ROW{ 10 }, W{ 4 };

void create(int**& a)
{
    a = new int* [N_ROW];
    for (int i = 0; i < N_ROW; ++i)
        a[i] = new int[N_COL];
}

void fill(int* const* a)
{
    for (int i = 0; i < N_ROW; ++i)
        for (int j = 0; j < N_COL; ++j)
            a[i][j] = i + j;
}

void print(int const* const* a)
{
    for (int i = 0; i < N_ROW; ++i, std::cout << std::endl)
        for (int j = 0; j < N_COL; ++j)
            std::cout << std::setw(W) << a[i][j];
}

void clear(int** a)
{
    for (int i = 0; i < N_ROW; ++i)
        delete[] a[i];
    delete[] a;
}

int main()
{
    int** a;
    create(a);
    fill(a);
    print(a);
    clear(a);
    return 0;
}
