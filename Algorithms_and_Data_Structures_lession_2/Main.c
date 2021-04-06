#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
//Алгоритмы и структуры данных. Домашнее задание к уроку 2. Казанцев Иван.
//1st task. Функция возведения числа в степень с рекурсией
long int gradeR(int x, int n)
{
    if (n == 0)
        return 1;
    for (; n % 2 == 0; n /= 2)
        x *= x;
    return x * grade(x, n - 1);
}

//2nd task. Функция возведения числа в степень без рекурсии
long int grade(int x, int n)
{
    long int result = 1;
    while (n != 0)
    {
        if (n % 2 != 0) result *= x;
        n /= 2;
        x *= x;
    }
    return result;
}

int main(int argc, char* argv[])
{

    //1st task actions
    int a, b;
    printf("a=");
    scanf("%i", &a);
    printf("b=");
    scanf("%i", &b);

    printf("Result: %i\n", gradeR(a, b));

    //2nd task actions
    int x, n;
    printf("x=");
    scanf("%i", &x);
    printf("n=");
    scanf("%i", &n);
    printf("Result: %i\n ", grade(x,n));

    return 0;
}