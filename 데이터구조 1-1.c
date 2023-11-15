#include <stdio.h>

int add1(int a, int b)
{
    int hab = 0;
    for (;a <= b;a++)
    {
        hab += a;
    }
    printf("m부터 n까지 합은 %d 입니다.\n", hab);
    return 0;
}

int add2(int a, int b)
{
    if (a == b)
        return b;
    else
        return a + add2(a + 1, b);
}

int main(void) {
    int m, n;
    int hab2 = 0;

    printf("m의 값 입력: ");
    scanf_s("%d", &m);

    printf("n의 값 입력: ");
    scanf_s("%d", &n);

    add1(m, n);
    hab2 = add2(m, n);

    printf("%d \n", hab2);

    return 0;
}