#include <stdio.h>
#include <math.h>

//Задача7
//Да се внеси преку тастатура еден број и да се провери дали бројот е делив со 3 (broj % 3 == 0)
//Резултатот од проверката да се отпечати на екран. (0 или 1)
int main()
{

    int broj;

    scanf("%d", &broj);

    int result = broj % 3 == 0;

    printf("The result is: %d", result);

    return 0;
}
