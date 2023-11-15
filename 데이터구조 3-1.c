#define MAX(a,b) ((a>b)? a:b)
#define MAX_DEGREE 101
#include<stdio.h>
#include<math.h>


typedef struct
{
    int degree;
    float coef[MAX_DEGREE];
}polynomial;


polynomial asd()
{
    polynomial C;
    int num = 0;
    float num2 = 0;
    int num3 = 0;
    printf("A항 차수를 입력하시오:");
    scanf_s("%d", &num);
    C.degree = num;
    for (int i = 0;i <= num;i++)
    {
        printf("계수를 입력해주세요 \n", num - i);
        scanf_s("%f", &num2);
        C.coef[i] = num2;
    }
    return C;
}
polynomial asd2()
{
    polynomial C;
    int num = 0;
    float num2 = 0;
    int num3 = 0;
    printf("B항 차수를 입력하시오:");
    scanf_s("%d", &num);
    C.degree = num;
    for (int i = 0;i <= num;i++)
    {
        printf("계수를 입력해주세요 \n", num - i);
        scanf_s("%f", &num2);
        C.coef[i] = num2;
    }
    return C;
}
polynomial hap(polynomial C)
{
    float num3;
    double sum = 0;


    printf(" x값 입력:");
    scanf_s("%f", &num3);
    for (int i = C.degree; i > 0; i--)
    {
        sum = sum + (pow(num3, i) * C.coef[C.degree - i]);
    }
    printf("계산결과:  %3.1f\n", sum);
    return C;
}
polynomial addpoly(polynomial A, polynomial B)
{
    polynomial C;
    int A_index = 0, B_index = 0, C_index = 0;
    int A_degree = A.degree, B_degree = B.degree;
    C.degree = MAX(A.degree, B.degree);

    while (A_index <= A.degree && B_index <= B.degree)
    {
        if (A_degree > B_degree)
        {
            C.coef[C_index++] = A.coef[A_index++];
            A_degree--;
        }
        else if (A_degree == B_degree)
        {
            C.coef[C_index++] = A.coef[A_index++] + B.coef[B_index++];
            A_degree--;
            B_degree--;
        }
        else
        {
            C.coef[C_index++] = B.coef[B_index++];
            B_degree--;
        }

    }
    return C;
}
void poly(polynomial d)
{
    int i, degree;
    degree = d.degree;
    for (i = 0; i <= d.degree; i++)
    {
        printf("%3.0fx^%d", d.coef[i], degree--);
        if (i < d.degree)
            printf("+");
    }
    printf("\n");

}

int main(void)
{
    polynomial A;
    polynomial B;
    polynomial C;
    int num = 0;
    while (1)
    {
        A = asd();
        B = asd2();
        C = addpoly(A, B);
        addpoly(A, B);
        poly(A);
        poly(B);
        poly(C);
        hap(A);
        continue;
    }
    return 0;
}