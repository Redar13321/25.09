#include <iostream>;
#include <windows.h>;

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double evenSum = 0;
	double oddSum = 0;
	double sum = 0;
	double curNumber = 0;
	cout << "Введите числа, чтобы получить сумму. Остановка - число 0." << "\n";
	do {
		cin >> curNumber;
		sum += curNumber;
		if ((int)curNumber % 2 == 0)
			evenSum += curNumber;
		else
			oddSum += curNumber;
	} while (curNumber != 0);
	cout << "Сумма: " << sum << "\n";
	cout << "Сумма чётных чисел: " << evenSum << "\n";
	cout << "Сумма нечётных чисел: " << oddSum << "\n";
	return 0;
}