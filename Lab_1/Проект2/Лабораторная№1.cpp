/*
Герасименко Сергей Евгеньевич 
Лабораторная Работа 1
Вариант 6
Задание: Перевасти тонны в центнеры и выразит в граммах
*/



#include<iostream>
#include<conio.h>
#define CentnersInTon 10;
#define GrammsInCentners 100000;



int main()
{
	printf("Enter weight in tons\n");
	float tons;
	int result = scanf_s("%f", &tons);
	if (result == 0) {
		printf("Error message\n");
	}
	else {
		float centner = tons * CentnersInTon;
		printf("Weight in centners is %1.0f centners \n", centner);
		float gramms = centner * GrammsInCentners;
		printf("Weight in gramms is %1.0f gramms \n", gramms);
	}
	_getch();

	return 0;
}