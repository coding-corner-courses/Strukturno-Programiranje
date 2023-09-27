#include <stdio.h>

//Напиши програма каде што преку тастатура ќе се чита цел број number.
// -Дефинирај блок од изрази и во него дефинирај променлива isEven во која ќе биде запишано дали number е парен број.
// -Надвор од дефинираниот блок отпечати ја променливата isEven

int main()
{

    int number;

    scanf("%d", &number);

    int isEven;

    {
        isEven = number % 2 == 0;
    }

    printf("IsEven: %d", isEven);

    return 0;
}

