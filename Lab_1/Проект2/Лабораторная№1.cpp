/*
Герасименко Сергей Евгеньевич 
Лабораторная Работа 1
Вариант 6
Задание: Перевасти тонны в центнеры и выразит в граммах
*/



#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define CentnersInTon 10;
#define GrammsInCentners 100000;

void check(int result)
{
	if (result == 0) {
		printf("Error message\n");
		_getch();
		exit(1);
	}
}
void writeValue(float centner, float gramms)
{
	printf("Weight in centners is %1.2f centners \n", centner);
	printf("Weight in gramms is %1.2f gramms \n", gramms);
}
int main()
{
	printf("Enter weight in tons\n");
	float tons;
	check( scanf_s("%f", &tons));
		float centner = tons * CentnersInTon;
		float gramms = centner * GrammsInCentners;
		writeValue(centner, gramms);
	_getch();

	return 0;
}