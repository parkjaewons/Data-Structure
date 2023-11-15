#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int Re(char* ch)
{
    if (*ch == '\0')
        return 0;
    else
        return 1 + Re(ch + 1);
}
void c1(void)
{
    char s1[100];
    int l = 0;

    printf("문자 입력: ");
    scanf("%s", s1);

    for (int i = 0;s1[i];i++) {
        l += 1;
    }
    printf("문자열 길이 : %d \n", l);
}
void c2(void)
{
    char* s1 = malloc(sizeof(char) * 100);
    int l = 0;

    printf("문자 입력: ");
    scanf("%s", s1);

    while (*(s1 + l)) {
        l++;
    }
    printf("문자열 길이 : %d \n", l);

    free(s1);
}

void c3(void)
{
    char s1[100];
    int l = 0;

    printf("문자 입력: ");
    scanf("%s", s1);

    Re(s1);
    printf("문자열의 길이 : %d", Re(s1));
}
int main(void)
{
    c1();
    c2();
    c3();

    return 0;
   
}