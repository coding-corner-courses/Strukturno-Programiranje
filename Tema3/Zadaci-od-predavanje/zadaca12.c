#include <stdio.h>

//Напишете програма каде што за внесен број ќе се провери дали бројот е двоцифрен и дали бројот на единици е еднаков на 1.
int main()
{
    int number;

    scanf("%d", &number);

    //48
    int onesDigit = number % 10;

    if(number>9 && number<100 && onesDigit ==1)
    {
        printf("The condition is true");
    }

    return 0;
}
