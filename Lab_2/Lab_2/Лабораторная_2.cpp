/*
Герасименко Сергей Евгеньевич
Лабораторная работа №2.
Вариант №8
Задание : Написать программу, которая вычисляет сумму
которая построчно выводит сумму первого и последнего,
второго и предпоследнего и т.д. элементов массива.
Массив и его длина вводятся пользователем.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define LENGTH_OF_ARRAY 1000

int check(int result)
{
	if (result == 0)
	{
		printf("Error \n");
		_getch();
		exit(1);
	}
}
void read(int* num, int length)
{
	for (int i = 0; i < length; i++)
	{
		check(scanf_s("%d", &num[i]));
	}
}
void writeSumm(int *num, int length)
{
	for (int i = 0; i < length / 2; i++)
	{
		int sum = num[i] + num[length - i - 1];
		printf("%d \n", sum);
	}
	if (length % 2)
		printf("%d \n", num[length / 2]);
}

int main()
{
	printf("Enter length of array \n");
	int length;
	check(scanf_s("%d", &length));
	int num[LENGTH_OF_ARRAY];
	printf("Enter number \n");
	read(num, length);
	writeSumm(num, length);
	_getch();
	return 0;
}
