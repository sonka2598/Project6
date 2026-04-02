#include <iostream>
#include <Windows.h>

int calcResult(int count)
{
    if (count <= 1) return count;
    return calcResult(count - 1) + calcResult(count - 2);
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int number = 0;

	std::cout << "Введите число: ";
	std::cin >> number;

	std::cout << "Числа Фибоначчи: ";

    for (int i = 0; i < number; i++) {
        std::cout << calcResult(i) << " ";
    }
	return 0;
}
