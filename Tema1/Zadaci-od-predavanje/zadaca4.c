#include <stdio.h>
#include <math.h>

// Задача4
// Да се внесат два броеви од тастатура и да се пронајде корен од нивната
// сума.Да се испечатат внесените броеви и добиениот резултат на екран

int main()
{
    int number1, number2;

    scanf("%d", &number1);
    scanf("%d", &number2);

    float result = sqrt(number1 + number2);

    printf("The numbers are: %d and %d. The result is: %.2f",number1,number2,result);

    return 0;
}
