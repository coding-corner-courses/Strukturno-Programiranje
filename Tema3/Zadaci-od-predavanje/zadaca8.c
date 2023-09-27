#include <stdio.h>

//Напиши програма каде што преку тастатура ќе биде внесен еден троцифрен број. Најди ја цифрата на единици, десетки и стотки и пресметај:
//(бр_единици % бр_стотки) - бр_десетки
//Резултатот отпечати го на екран.

int main()
{

    int number;

    scanf("%d", &number);

    // цифра на единици
    // 985
    int onesDigit = number % 10;

    // цифра на десетки
    // 985 -> 98 -> 8
    int tensDigit = (number / 10)%10;

    // цифра на стотки
    // 985 -> 9
    int hundredDigit = number / 100;

    //printf("%d %d %d", onesDigit, tensDigit, hundredDigit);

    int result = (onesDigit % hundredDigit) - tensDigit;

    printf("Result %d", result);

    return 0;
}
