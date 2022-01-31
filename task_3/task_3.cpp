/*
3. Написать программу, которая предлагает пользователю ввести
число и, затем подсчитывает, сколько раз это число встречается
в массиве.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main()
{
	setlocale(LC_ALL, ""); // работает только с потоком вывода
	srand(time(nullptr));

	cout << "Введите число: \n";
	int number{ 0 };
	cin >> number;

	int min{ -10 };
	int max{ 10 };
	const int arrSize{ 10 };

	int arr[arrSize]{};

	int count{ 0 };
	for (int i = 0; i < arrSize; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
		cout << arr[i] << ' ';
		if (arr[i] == number)
			count++;
	}
	cout << endl << number << " встречается в массиве " << count << " раз." << endl;

	return 0;
}