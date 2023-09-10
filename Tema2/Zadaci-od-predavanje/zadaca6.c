#include <stdio.h>

//Направи програма каде што преку тастатура корисникот ќе внеси добитен број (luckyNumber)
//кој подоцна во програмата ќе може да го  погоди.
//Доколку второвнесениот број е еднаков на luckyNumber тогаш треба да се отпечати на екран
//“Congratulations, you’ ve entered the lucky number, во спротивно да отпечати “Better luck next time”.

int main()
{
    int luckyNumber, secondNumber;

    scanf("%d", &luckyNumber);

    scanf("%d", &secondNumber);

    luckyNumber == secondNumber? printf("Congratulation, you've entered the lucky number"): printf("Better luck next time");

    return 0;
}
