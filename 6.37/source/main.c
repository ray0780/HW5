#include <stdio.h>
#include <stdlib.h>

int findmax(int a[],int i);

int main(void)
{
	int a[6] = {0};
	int i=5,x=0;
	printf("��J6�Ӽƭ�: ");
	scanf_s("%d%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5]);
	x=findmax(a,i);
	printf("�̤j���ƭ�: %d\n", x);
	return 0;
	system("pause");
}

int findmax(int a[], int i)
{
	int ram;
	if (i != -1)
	{
		if (a[0] < a[i])
		{
			ram = a[0];
			a[0] = a[i];
			a[i] = ram;
		}
		i--;
		findmax(a, i);
	}
	else
	{
		return a[i+1];
	}	
}