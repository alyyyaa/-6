//Дан массив размера N. Считать, что нумерация элементов в массиве начинатеся с нуля, найти номера тех элементов 
//массива, которые больше своего правого соседа, и количество таких элементов. Найденные номера выводить в
//порядке возрастания. Использовать указатели для доступа к очередному элементу массива. Дополнительный массив
//не заводить.
#include<iostream>
using namespace std;
void main()
{
    const int n = 9;
    int a[n] = { 5, 2, 3, 4, 1, 8, 7, 10, 0 };
    int count = 0;
    int* ptr = a;
        for (int i = 0; ptr < &a[n - 1]; ptr++, i++)
        {
            if (*ptr > *(ptr + 1))
            {
                cout << i << " ";
                count++;
            }
        }
        cout << endl;
        cout <<"Количество таких элементов: " << count;
}