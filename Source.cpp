#include <iostream>;
#include <windows.h>;

using namespace std;

const double COMMISSION_RATE = 0.05; // Комиссия 5%

const string STR_Dollar = "Доллар";
const double ER_Dollar = 75.0;

const string STR_Evro = "Евро";
const double ER_Evro = 85.0;

const string STR_Uani = "Юань";
const double ER_Uani = 11.0;

const string STR_Farit = "Фарит";
const double ER_Farit = 100.0;

const string STR_Iena = "Йен";
const double ER_Iena = 0.7;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double rubles;
	string currencyChoice;
	double commission;
	double finalAmount;
	double convertedAmount;
	char repeat;

	do {
		cout << "Введите количество рублей для обмена: ";
		cin >> rubles;
		commission = rubles*COMMISSION_RATE;
		finalAmount = rubles - commission;

		cout << "Выберите валюту для обмена: " << "\n"
		<< "\t" << STR_Dollar << "\n"
		<< "\t" << STR_Evro << "\n"
		<< "\t" << STR_Uani << "\n"
		<< "\t" << STR_Farit << "\n"
		<< "\t" << STR_Iena << "\n";
		cout << "Введите валюту: ";
		cin >> currencyChoice;

		if (currencyChoice == STR_Dollar)
		{
			convertedAmount = finalAmount / ER_Dollar;
		}
		else if (currencyChoice == STR_Evro)
		{
			convertedAmount = finalAmount / ER_Evro;
		}
		else if (currencyChoice == STR_Uani)
		{
			convertedAmount = finalAmount / ER_Uani;
		}
		else if (currencyChoice == STR_Farit)
		{
			convertedAmount = finalAmount / ER_Farit;
		}
		else if (currencyChoice == STR_Iena)
		{
			convertedAmount = finalAmount / ER_Iena;
		}
		else
		{
			cout << "Некорректный выбор валюты." << "\n"
		                << "Хотите повторить обмен? (y/n): ";
			cin >> repeat;
			continue;
		}
		cout << "Сумма комиссии: " << commission << " рублей" << "\n"
		<< "Вы получили: " << convertedAmount << " " << currencyChoice << "\n"
		<< "Хотите повторить обмен? (y/n): ";
		cin >> repeat;
	} while (repeat != 'n' && repeat != 'N');
	
	cout << "Спасибо за использование конвертером валют.\n";
	return 0;
}
