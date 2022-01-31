/*
1. Создать массив из 10 случайных чисел в диапазоне от -5 до 5.
Определить количество положительных, отрицательных и
нулевых элементов массива.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, ""); // работает только с потоком вывода
	srand(time(nullptr));

	int min{ -5 };
	int max{ 5 };
	const int arrSize{ 10 };

	int arr[arrSize]{};

	int positive{ 0 }, negative{ 0 }, zero{ 0 };
	for (int i = 0; i < arrSize; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
		cout << arr[i] << ' ';
		if (arr[i] < 0)
			negative++;
		else if (arr[i] == 0)
			zero++;
		else if (arr[i] > 0)
			positive++;
	}
	cout << "\nКоличество отрицательных = " << negative
		<< "\nКоличество нулевых = " << zero
		<< "\nКоличество положительных = " << positive << endl;

	return 0;
}