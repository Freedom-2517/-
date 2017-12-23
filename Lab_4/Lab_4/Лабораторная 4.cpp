/* Герасименко Сергей Евгеньевич
Лабораторная работа №4.
Вариант №8
Задание : Написать программу, которая во вводимом с
клавиатуры тексте удалит все пробелы, знаки табуляции и
выведет количество удаленных символов на экран..*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <conio.h>
#include <stdlib.h>

#define SPACE  32
#define TAB  10
#define ENTER  9

char* ans = NULL;

void checkFile(FILE* F_in, FILE* F_out)
{
	if (F_in == NULL)
	{
		printf("File not found");
		exit(1);
	}
	if (F_out == NULL)
	{
		printf("File not found");
		exit(1);
	}
}
void readfile(FILE* f_in, int* SizeArray, int* Deleted)
{
	char c;
	do
	{
		c = fgetc(f_in);
		if (c != SPACE && c != TAB && c != ENTER && c != EOF)
		{
			ans = (char*)realloc(ans, (*SizeArray + 2) * sizeof(char));
			ans[*SizeArray] = c;
			ans[*SizeArray + 1] = '\0';
			(*SizeArray)++;
		}
		else (*Deleted)++;
	} while (c != EOF);
}

void writefile(FILE* f_out, int Deleted, int SizeArray)
{
	fprintf_s(f_out,"Deleted - %d\n", --Deleted);
	for (int i = 0; i < SizeArray; i++)
	{
		fprintf_s(f_out,"%c", ans[i]);
	}
}

int main()
{
	FILE *F_in = NULL, *F_out = NULL;
	F_in = fopen("F_in.txt", "r");
	F_out = fopen("F_out.txt", "w");
	checkFile(F_in, F_out);
	int SizeArray = 0;
	int Deleted = 0;
	readfile(F_in, &SizeArray, &Deleted);
	writefile(F_out, Deleted, SizeArray);
	return 0;
}