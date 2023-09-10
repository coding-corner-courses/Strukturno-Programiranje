#include <stdio.h>

//Направи програма каде што преку тастатура ќе се внесат два цели броеви
//и ќе се пронајде нивниот количник. Отпечати го резултатот.
int main()
{
    int number1, number2;

    scanf("%d", &number1);
    scanf("%d", &number2);

    double result = (double) number1 / number2;

    printf("The result is %f", result);

    return 0;
}
