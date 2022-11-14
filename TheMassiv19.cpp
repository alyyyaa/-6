//В массиве найти значения трех наименьших элементов и вывести их в порядке убывания. Гарантируется что в массиве есть хотя бы три различных
//элемента. Запрещается проходить по массиву более одного раза.
#include <iostream>
#include <ctime>
using namespace std;
void main()
{
	//Массив без повторяющихся элементов
	srand(time(NULL));
	const int size = 10;
	int arr[size];

	bool alreadyThere; //Значение переменной, уже находящееся в массиве
	for (int i = 0; i < size;)
	{
		alreadyThere = false;
		int newRandomValue = rand() % 20;

		for (int j = 0; j < i; j++)
		{
			if (arr[j] == newRandomValue)
			{
				alreadyThere = true;
				break;
			}
		}
		if (!alreadyThere)
		{
			arr[i] = newRandomValue;
			i++;
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	
	int minValue1 = 20;
	int minValue2 = 20;
	int minValue3 = 20;
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
		if (arr[i] < minValue1)
		{
			minValue3 = minValue2;
			minValue2 = minValue1;
			minValue1 = arr[i];
		}
		else if (minValue2 > arr[i])
		{
			minValue3 = minValue2;
			minValue2 = arr[i];
		}
		else if (minValue3 > arr[i])
		{
			minValue3 = arr[i];
		}
	}
	cout << "Третий наименьший элемент массива: " << minValue3 << endl;
	cout << "Второй наименьший элемент массива: " << minValue2 << endl;
	cout << "Первый наименьший элемент массива: " << minValue1;
}