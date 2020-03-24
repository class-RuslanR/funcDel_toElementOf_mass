#include "pch.h"
#include <iostream>

using namespace std;

void funcEnter(int *arr, int s)
{
	cout << "Заполните массив: " << "\n";
	for (int i = 1; i <= s; ++i)
	{
		cin >> arr[i];
	}
}

void funcShow(int *arr, int s)
{
	for (int i = 1; i <= s; ++i)
	{
		cout << "[" << i << "]" << " = " << arr[i] << "    ";
	}
	cout << "\n";
}

void funcDel_i(int *arr, int& s)
{
	int num_del;
	cout << "\nВведите номер ячейки массива для удаления: ";
	cin >> num_del;
	for (int i = 1; i <= s; ++i)
	{
		if (num_del == i)
		{
			for (int j = i; j <= s; ++j)
			{
				arr[j] = arr[j + 1];
			}
			--s;
			break;
		}
	}

}

int main()
{
	setlocale(LC_ALL, "ru");
	int *arr = new int[100];
	int size;
	cout << "Введите размерность массива: ";
	cin >> size;
	funcEnter(arr, size);
	cout << "Массив до удаления элемента:" << endl;
	funcShow(arr, size);
	funcDel_i(arr, size);
	cout << "Массив после удаления элемента:" << endl;
	funcShow(arr, size);
	delete[] arr;
	system("pause");
	return 0;
}
