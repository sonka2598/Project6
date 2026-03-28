#include <iostream>
#include <vector>
#include <Windows.h>

void calcResult(int value, int power, int result)
{
	for (int i = 0; i < power; i++)
	{
		result *= value;
	}

	std::cout << value << " в степени " << power << " = " << result << std::endl;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	calcResult(5, 2, 1);
	calcResult(3, 3, 1);
	calcResult(4, 4, 1);
}
