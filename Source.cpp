#include <iostream>;
#include <windows.h>;

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double sum = 0;
	double curNumber = 0;
	cout << "������� �����, ����� �������� �����. ��������� - ����� 0." << "\n";
	do {
		cin >> curNumber;
		sum += curNumber;
	} while (curNumber != 0);
	cout << "�����: " << sum << "\n";
	return 0;
}