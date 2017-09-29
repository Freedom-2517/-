// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include <conio.h>
#include <stdio.h>
#include <stdafx.h>


int main()
{
	printf("Enter weight in tons\n");
	float tons;
	scanf_s("%f", &tons);
	float centner = tons * 10;
	printf("Weight in centners is %1.0f centners \n", centner);
	float gramms = centner * 100000;
	printf("Weight in gramms is %1.0f gramms \n", gramms);
	return 0;
}

