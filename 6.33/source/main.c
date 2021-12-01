#include <stdio.h>
#include <stdlib.h>

int bisearch(const int arr[], int start, int end, int khey);

int main()
{
	int arr[10] = { 0,2,4,6,8,10,12,14,16,18};
	int end = 10;
	int start = 0;
	int key=0;
	int x;
	printf("請輸入要搜尋的key: ");
	scanf_s("%d", &key);
	x = bisearch(arr, start, end, key);
	if (x != -1)
	{
		printf("%d在第%d個位置\n", key,x+1 );
	}
	else
	{
		printf("找不到\n");
	}
	system("pause");
	return 0;
}

int bisearch(const int arr[], int start, int end, int khey) 
{
	if (start > end)
		return -1;

	int mid = start + (end - start) / 2;
	if (arr[mid] > khey)
	{
		return bisearch(arr, start, mid - 1, khey);
	}	
	else if (arr[mid] < khey)
	{
		return bisearch(arr, mid + 1, end, khey);
	}
	else 
	{
		return mid;
	}
}