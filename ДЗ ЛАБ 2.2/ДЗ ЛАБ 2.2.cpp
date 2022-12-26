// ДЗ ЛАБ 2.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <clocale>
#include <iomanip >
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    const int M = 10, N = 12;
    int i, j, a[M][N], h;
    int v = 0;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
            a[i][j] = rand() % 21 - 10;
    }
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
            cout << a[i][j] << "\t";
        cout << "\n";
    }
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i > 5 && a[i][j] > -1)
                v = v + 1;
        }
    }

    cout << "v= " << v << "\n";

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            h = 0;
            if (j % 2 == 0 && a[i][j] < 0)
                h += 1;
        }
    }

    int* b = new int[N];
    h = 0;
    for (j = 1; j < N; j++)
    {
        int count = 0;
        for (i = 0; i < M; i++)
        {
            if (a[i][j] < 0)
            {
                count += 1;
            }
        }
        b[h] = count;
        h += 1;
        j++;
    }

    for (i = 0; i < N / 2; i++)
    {
        cout << b[i] << "\t";
    }
    cout << endl;
    return 0;
}
