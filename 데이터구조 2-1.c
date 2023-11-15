#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Max(int n, int max, int arr[])
{
    if (n == 0)
    {
        return max;
    }
    if (max < arr[n - 1])
        max = arr[n - 1];

    return Max(n - 1, max, arr);
}

int main(void)
{
    int arr[10];

    for (int i = 0; i < 10; i++) {
        printf("입력: ");
        scanf("%d", &arr[i]);
    }

    printf("최댓값: %d", Max(sizeof(arr) / sizeof(int), 0, arr));
    return 0;
}