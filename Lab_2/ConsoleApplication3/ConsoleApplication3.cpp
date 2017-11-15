/*
Герасименко Сергей Евгеньевич
Лабораторная работа №2.
Вариант №8
Задание : Написать программу, которая вычисляет сумму 
которая построчно выводит сумму первого и последнего, 
второго и предпоследнего и т.д. элементов массива.
Массив и его длина вводятся пользователем.
*/

#include "stdafx.h"
#include<iostream>
#include<conio.h>



int main()
{
	printf("Enter length of array \n");
	int length;
	int result = scanf_s("%d", &length);
	if (result == 0)
	{
		printf("Error \n");
		_getch();
		return 0;
	}
	int num[1000];
	printf("Enter number \n");
	for (int i = 0; i < length; i++)
	{
		int result = scanf_s("%d", &num[i]);
		if (result == 0)
		{
			printf("Error \n");
			_getch();
			return 0;
		}
	}
	for (int i = 0; i < length / 2; i++)
	{
		int sum = num[i] + num[length - i - 1];
		printf("%d \n", sum);
	}

	if (length % 2)
		printf("%d \n" , num[length / 2 ]);
	_getch();
    return 0;
}

