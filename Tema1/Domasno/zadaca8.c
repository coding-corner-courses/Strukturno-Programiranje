#include <stdio.h>
#include <math.h>

//Задача8
//Да се внесат преку тастура два броеви и да се најде нивниот производ.
//Да се провери дали нивниот производ е делив со 7 и резултатот да се отпечати на екран.
int main()
{

    int number1, number2;

    scanf("%d", &number1);
    scanf("%d", &number2);

    int result = number1* number2;

    printf("The result is %d", result % 7 == 0);

    return 0;
}
