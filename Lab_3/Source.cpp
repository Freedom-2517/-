/* Герасименко Сергей Евгеньевич
Лабораторная работа №3.
Вариант №8
Задание : Написать программу, которая во вводимом с
клавиатуры тексте удалит все пробелы, знаки табуляции и
выведет количество удаленных символов на экран..*/

#include <stdio.h>
#include <malloc.h>
#include <conio.h>
int main()
{
	int SizeArray = 0;
	int Deleted = 0;
	char *ans = NULL;
	char c;
	do
	{
		c = getchar();
		if (c != 10 && c != 9 && c != 32 && c != EOF && c != 26)
		{
			ans = (char*)realloc(ans, (SizeArray + 1) * sizeof(char));
			ans[SizeArray] = c;
			SizeArray++;
		}
		else Deleted++;
	} while (c != EOF && c != 26);
	printf_s("%d\n", --Deleted);
	for (int i = 0; i < SizeArray; i++)
	{
		printf_s("%c", ans[i]);
	}
	_getch();
	return 0;
}