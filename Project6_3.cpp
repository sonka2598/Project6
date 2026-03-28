#include <iostream>
#include <vector>
#include <Windows.h>

void calcResult(int number)
{
	double numberFib = 0;

	double num0 = 0;
	double num1 = 1;

	std::cout << "Числа Фибоначчи: ";

	for (int i = 0; i < number; i++)
	{
		std::cout << num0 << " ";
		numberFib = num0 + num1;
		num0 = num1;
		num1 = numberFib;
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int number = 0;

	std::cout << "Введите число: ";
	std::cin >> number;

	calcResult(number);

}