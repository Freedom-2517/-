#include <stdio.h>
#include <malloc.h>
#include <conio.h>

#define SPACE 32
#define TAB 10
#define ENTER 9
#define END 26

char c;
char* read(int c, int* SizeArray, int* Deleted)
{
	char* ans = NULL;
	do
	{
		c = getchar();
		if (c != SPACE && c != TAB && c != ENTER && c != EOF && c != END)
		{
			ans = (char*)realloc(ans, (*SizeArray + 1) * sizeof(char));
			ans[*SizeArray] = c;
			(*SizeArray)++;
		}
		else (*Deleted)++;
	} while (c != EOF && c != END);
	return ans;
}
void write(int SizeArray, char* ans, int Deleted)
{
	for (int i = 0; i < SizeArray; i++)
	{
		printf_s("%c", ans[i]);
	}
	printf_s("%d\n", --Deleted);
}
int main()
{
	int SizeArray = 0;
	int Deleted = 0;
	char *ans = NULL;
	free(ans);
	ans = read(c, &SizeArray, &Deleted);
	printf_s("%d\n", --Deleted);
	write(SizeArray, ans, Deleted);
	_getch();
	return 0;
}