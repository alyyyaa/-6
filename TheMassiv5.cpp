//В массиве X(N), в котором все элементы различны между собой, найти S1 - сумму элементов массива, расположенных после максимального элемента 
//и S2 - сумму элементов массива, расположенных до максимального элемента.
#include <iostream>
using namespace std;

int main()
{
    int n, i, digit, maxdigit = -666, s1 = 0, s2 = 0;
    cout << "Введите размер массива:";
    cin >> n;
    int* massiv = new int[n];
    for (i = 0; i < n; i++) {
        cin >> massiv[i];
    }
    for (i = 0; i < n; i++) {
        if (maxdigit < (massiv[i])) {
            maxdigit = max(maxdigit, massiv[i]);
            digit = i;
        }
    }

    for (i = 0; i < digit; i++) {
        s2 += (massiv[i]);
    }
    for (i = digit + 1; i < n; i++) {
        s1 += (massiv[i]);
    }
    cout << "Сумма элементов массива, расположенных после максимального элемента = " << s1 << endl;
    cout << "Сумма элементов массива, расположенных до максимального элемента = " << s2;
    delete[] massiv;
}