#include <stdio.h>

//Напишете програма која ќе проверува дали внесен број е позитивен, негативен или нула. Отпечатете го резултатот на екран.
int main()
{

    int number;

    scanf("%d", &number);

    if( number > 0 )
    {
        printf("The number is positive");
    }
    else if(number < 0)
    {
        printf("The number is negative");
    }
    else
    {
        printf("The number is 0");
    }
}
