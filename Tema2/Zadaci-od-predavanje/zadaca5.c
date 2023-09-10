#include <stdio.h>

//Направи програма каде што преку тастатура ќе се внеси цел број.
//Доколку бројот е парен отпечати “Number is even”, во спротивно отпечати “Number is odd”.
int main()
{
    int number;

    scanf("%d", &number);

    number % 2 == 0? printf("The number is even") : printf("The number is odd");

    return 0;
}
