#include <stdio.h>

//Направи програма каде што преку тастатура ќе се внеси цел број.
//Зголеми ја вреднoста на бројот за 5.
//Пробај различни типови на инкрементација и декрементација
int main()
{
    int number;

    scanf("%d", &number); // 5

    // number = number +5;
    number += 5; // 10

    // ++number
    printf("++number: %d\n", ++number); //11
    printf("After ++number: %d\n", number); //11

    // number++
    printf("number++: %d\n", number++); //11
    printf("After number++: %d\n", number); //12

    // --number
    printf("--number: %d\n", --number); //11
    printf("After --number: %d\n", number); //11

    // number--
    printf("number--: %d\n", number--); //11
    printf("After --number: %d\n", number); //10

    return 0;
}
