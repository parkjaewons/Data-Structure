#include <stdio.h>

int search(int* arr, int len, int t)
{
	int f = 0;
	int l = len - 1;
	int mid;

	while (f <= l)
	{
		mid = (f + l) / 2;
		if (t == arr[mid])
		{
			return mid;
		}
		else
		{
			if (t > arr[mid])
			{
				f = mid + 1;
			}
			else
			{
				l = mid - 1;
			}
		}
	}
	return -1;
}

int main(void)
{
	int arr[] = { 1,3,5,7,9,11 };
	int len = sizeof(arr) / sizeof(int);
	int index;

	index = search(arr, len, 11);
	if (index == -1)
		printf("찾을 수 없습니다.\n");
	else
		printf("t의 인덱스: %d\n", index);
	return 0;

}