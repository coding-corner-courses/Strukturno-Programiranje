#include <stdio.h>

// Задача1
// Внеси преку тастатура два цели броеви a и b. Отпечати ги броевите на
// екран,најди ја нивата разлика и отпечати ја разликата.

int main()
{

    int number1, number2;

    scanf("%d", &number1);
    scanf("%d", &number2);

    int result = number1 - number2;

    printf("The numbers are %d and %d. The result is %d", number1, number2, result);

    return 0;
}
