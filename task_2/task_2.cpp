/*
2. Создать массив из 10 целых случайных чисел. Вычислить сумму
четных элементов массива и среднее арифметическое нечетных.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, ""); // работает только с потоком вывода
	srand(time(nullptr));

	int min{ -10 };
	int max{ 10 };
	const int arrSize{ 10 };

	int arr[arrSize]{};

	int sum_of_even{ 0 }, sum_of_odd{ 0 }, amount_of_odd{ 0 };
	for (int i = 0; i < arrSize; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
		cout << arr[i] << ' ';
		if (arr[i] % 2 == 0)
			sum_of_even += arr[i];
		else
		{
			sum_of_odd += arr[i];
			amount_of_odd++;
		}
	}
	double arithmetic_mean_of_odd = double(sum_of_odd) / double(amount_of_odd);
	cout << "\nСумма четных элементов массива = " << sum_of_even
		<< "\nСреднее арифметическое нечетных = " << arithmetic_mean_of_odd << endl;

	return 0;
}