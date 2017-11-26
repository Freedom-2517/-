/* Герасименко Сергей Евгеньевич
Лабораторная работа №3.
Вариант №8
Задание : Написать программу, которая во вводимом с
клавиатуры тексте удалит все пробелы, знаки табуляции и
выведет количество удаленных символов на экран..*/

#include <stdio.h>
#include <malloc.h>
#include <conio.h>
#include <windows.h>

int main()
{	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int SizeArray = 0;
	int Deleted = 0;
	char *ans = NULL;
	free(ans);
	char c;
	const char space = 32, tab = 10, enter = 9, end = 26;
	do
	{
		c = getchar();
		if (c != space && c != tab && c != enter && c != EOF && c != end)
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