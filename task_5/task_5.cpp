/*
5. Создать массив из 20 целых случайных чисел в диапазоне от 2 до
100. Определить и вывести на экран все простые числа из этого
массива.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main()
{
	setlocale(LC_ALL, ""); // работает только с потоком вывода
	srand(time(0));

	int min{ 2 };
	int max{ 100 };
	const int arrSize{ 20 };

	int arr[arrSize]{};

	for (int i = 0; i < arrSize; i++) // заполняем и выводим
	{
		arr[i] = rand() % (max - min + 1) + min;
		cout << arr[i] << ' ';
	}
	cout << endl;

	int count{ 0 };

	for (int i = 0;  i < arrSize; i++)
	{
		if (arr)
		{

		}

	}

	return 0;
}