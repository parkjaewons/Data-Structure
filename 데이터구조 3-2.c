#include <stdio.h>
#include <stdlib.h>
#include<math.h>

#define MAX_SIZE 101

struct {
    float coef;
    int exp;
} terms[MAX_SIZE];
int avail;

char compare(int a, int b)
{
    if (a > b) return '>';
    else if (a == b) return '=';
    else return '<';
}


void attach(float coef, int exp)
{
    if (avail > MAX_SIZE)
    {
        return 0;
    }
    terms[avail].coef = coef;
    terms[avail++].exp = exp;
}


void poly_add(int As, int Ae, int Bs, int Be, int* Cs, int* Ce)
{

    float tempcoef;
    *Cs = avail;


    while (As <= Ae && Bs <= Be)
    {
        switch (compare(terms[As].exp, terms[Bs].exp))
        {
        case '>':
            attach(terms[As].coef, terms[As].exp);
            As++;                        return 0;

        case '=':
            tempcoef = terms[As].coef + terms[Bs].coef;
            if (tempcoef)
                attach(tempcoef, terms[As].exp);
            As++; Bs++;  return 0;

        case '<':
            attach(terms[Bs].coef, terms[Bs].exp);
            Bs++;    return 0;
        }

    }
    for (;As <= Ae;As++)
        attach(terms[As].coef, terms[As].exp);

  
    for (;Bs <= Be;Bs++)
        attach(terms[Bs].coef, terms[Bs].exp);

    *Ce = avail - 1;
}
printf_sum(int a)
{


    float num3;
    double sum = 0;


    printf("x값 입력:");
    scanf_s("%f", &num3);
    for (int i = terms->exp - 1; i > 0; --i)
    {
        sum = sum + (pow(num3, i) * terms[terms->exp- i].coef);
    }
    printf("계산결과:  %4.1f\n", sum);

    return sum;

}
void print_poly(int x, int e)
{
    for (int i = x;i < e;i++)
        printf("%3.1f X ^ %d + \n", terms[i].coef, terms[i].exp);
}

void main()
{
    int Cs, Ce;
    int As = 0, Ae = 0, Bs = 0, Be = 0;
    char iInput;
    int i = 0;
    int ss=0;
    int count = 0;
    int num = 0;

    while (1)
    {
    
        printf("A지수 및 차수 입력\n");

        for (Ae = 0; Ae < MAX_SIZE; ++Ae)
        {
    
            printf("지수 입력:");
            scanf_s("%d", &ss);

        
            terms[Ae].coef = ss;

            printf("차수입력 :");
            scanf_s("%d", &terms[Ae].exp);
            if (ss == -1)
            {
                break;
            }
        }


        printf("B계수 및 지수 입력\n");

        for (Be = Ae, Bs = Ae; Be < MAX_SIZE; ++Be)
        {
            printf("지수:");
            scanf_s("%d", &ss);

       
            terms[Be].coef = ss;

            printf("차수:");
            scanf_s("%d", &terms[Be].exp);
            if (ss == -1)
            {
                break;
            }
        }

        avail = Be;

        poly_add(As, Ae, Bs, Be, &Cs, &Ce);
        print_poly(As, Ae);
        print_poly(Bs, Be);
        print_poly(Cs, Ce);
        printf_sum(num);
        terms[Ae].exp = 0;
        terms[Be].exp = 0;

        printf("종료=-2입력 다시하려면 아무숫자나 입력 \n");
        scanf_s("%d", &count);
        if (count == -2)
            return 0;

    }
    return 0;
}