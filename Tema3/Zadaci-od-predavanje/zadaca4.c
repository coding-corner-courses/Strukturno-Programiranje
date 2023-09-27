#include <stdio.h>

//Напишете програма која ќе проверува дали внесен број е делив со 3, 5 ,7 или 11. Програмата соодветно го печати бројот и неговиот делител.
//Доколку бројот не е делив со ниеден од наведените броеви да се отпечати “The number is not divisible with the expected numbers”.
int main()
{

    int number;

    scanf("%d", &number);

    if(number % 3 == 0)
    {
        printf("The number is divisible with three");
    }
    else if(number % 5 == 0)
    {
        printf("The number is divisible with five");
    }
    else if(number % 7 == 0)
    {
        printf("The number is divisible with seven");
    }
    else if(number % 11 == 0)
    {
        printf("The number is divisble with eleven");
    }
    else
    {
        printf("The number is not divisible with the expected numbers");
    }

    return 0;
}
