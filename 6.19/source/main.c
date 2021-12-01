#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	long int d1 =  0 , d2 =  0 , a[13] = { 0 }, i = 0, j = 0, k = 0;
	float t1[13] = { 0 }, t2[13] = { 0 };
	const float EPS = 0.0001;
	srand(time(NULL));
	for (i = 0; i < 36000; i++)
	{
		d1 = 1 + (rand() % 6);
		d2 = 1 + (rand() % 6);
		j = d1 + d2;
		++a[j];
	}
	printf("翴计瞷Ω计:\n翴计2	%3dΩ""\n翴计3	%3dΩ""\n翴计4	%3dΩ""\n翴计5	%3dΩ""\n翴计6	%3dΩ"
		"\n翴计7	%3dΩ""\n翴计8	%3dΩ""\n翴计9	%3dΩ""\n翴计10	%3dΩ""\n翴计11	%3dΩ""\n翴计12	%3dΩ", 
		a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12]);
	printf("\n");
	for (k=2;k<13;k++)
	{
		t1[k] = a[k] / 36000;
	}
	for (k = 2; k < 8; k++)
	{
		t2[k]=(k-1)/36;
	}
	for (k = 8; k <13 ; k++)
	{
		t2[k] = (13 - k) / 36;
	}
	for (k = 2; k < 13; k++)
	{
		if (abs(t1[k] - t2[k]) < EPS)
		{
			printf("\n浑翴计%d诀瞯瞶\n",k);
		}
		else
		{
			printf("\n浑翴计%d诀瞯ぃ瞶\n",k);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}