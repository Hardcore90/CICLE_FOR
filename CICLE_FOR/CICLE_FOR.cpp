#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "Russian");

	//	Задание

	//	Создать программу, используя цикл for, которая с помощью цикла 
	//	суммирует числа от 1 до 100.
	int sum = 0;
	for (int i = 1;i <= 100;i++)
	{
		printf("%i + %i = %i\n", sum, i, sum + i);
		sum = sum + i;
	}
	printf("\n");
	printf("Сумма чисел от 1 до 100 равна %i\n", sum);
}
