#include <stdio.h>
#include <stdlib.h>

// Задача1
// Внеси преку тастатура два цели броеви a и b. Отпечати ги броевите на
// екран,најди ја нивата разлика и отпечати ја разликата.

int main()
{
    int number1,number2,result;

    scanf("%d", &number1);
    scanf("%d", &number2);

    result = number1-number2;

    printf("The numbers are %d and %d\n",number1,number2);
    printf("The result is: %d", result);

    return 0;
}
