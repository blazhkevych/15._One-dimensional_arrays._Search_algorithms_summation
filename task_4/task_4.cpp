/*
4. Создать массив из 20 случайных чисел в диапазоне от -30 до 10.
Определить сумму элементов массива, расположенных в массиве
до первого положительного элемента.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, ""); // работает только с потоком вывода
	srand(time(nullptr));

	int min{ -30 };
	int max{ 10 };
	const int arrSize{ 20 };

	int arr[arrSize]{};

	int count{ 0 };
	for (int i = 0; i < arrSize; i++) // заполняем и выводим
	{
		arr[i] = rand() % (max - min + 1) + min;
		cout << arr[i] << ' ';
	}

	int sum_of_array_elements{ 0 };

	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] >= 0)
			break;
		sum_of_array_elements += arr[i];
	}

	cout << endl << "Сумма элементов массива, расположенных в массиве до первого положительного элемента = " << sum_of_array_elements << endl;

	return 0;
}