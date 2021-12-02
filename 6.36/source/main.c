#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void chba(char a[],int i);

int main(void)
{
	char a[50];
	int i = 0;
	char j = ' ';

	do
	{
		scanf_s("%c", &a[i]);
		i++;
	} while (a[i-1] != ' ');
	i = i - 2;
	chba(a,i);
	return 0;
	system("pause");
}

void chba(char a[],int i)
{
	printf("%c", a[i]);
	if ( i != 1)
	{
		i--;
		chba(a,i);
	}
	else
	{
		printf("%c",a[0]);
	}
}

