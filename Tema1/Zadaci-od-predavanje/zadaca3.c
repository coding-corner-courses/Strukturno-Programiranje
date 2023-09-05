#include <stdio.h>
#include <math.h>

// Задача3
// Напиши програма преку која ќе можеш да внесеш два броеви од
// тастура и да го најдеш коренот од збирот на нивните квадрати.
// Резултатот отпечати го на екран.

int main()
{
    int number1, number2;

    scanf("%d", &number1);
    scanf("%d", &number2);

    float result;

    result=sqrt(pow(number1, 2) + pow(number2, 2));

    printf("The result is %.2f", result);

    return 0;
}
