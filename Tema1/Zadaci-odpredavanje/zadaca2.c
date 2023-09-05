#include <stdio.h>

// Задача2
// Напиши програма коjа ќе прави конверзија на Целзиусови  во
// Фаренхајтови степени.Целзиусовите степени се внесуваат од
// тастатура,а формулата за претворањето е f=1.8C+32.

int main()
{
    int celsius;

    scanf("%d", &celsius);

    float farenheit = 1.8*celsius+32;

    printf("The farenheit %.2f", farenheit);

    return 0;
}
