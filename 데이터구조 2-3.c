#include <stdio.h>

typedef struct
{
	double arr[10];
};

int main(void)
{
	double arr[10];
	int i;
	double sum=0;

	for (i = 0; i < 10; i++)
	{
		printf("복소수 입력: ");
		scanf_s
		("%lf", &arr[i]);

		sum += arr[i];
	}
	printf("합계: %lf", sum);
}