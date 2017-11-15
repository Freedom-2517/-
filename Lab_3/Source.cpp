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
}