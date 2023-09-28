#include <stdio.h>

//Напишете програма каде што за внесен број ќе се провери дали бројот е двоцифрен и дали бројот на десетки е еднаков на 8.
int main()
{
    int number;

    scanf("%d", &number);

    if(number>9 && number<100)
    {
        // 56
        int tensDigit = number / 10;

        if(tensDigit == 8)
        {
            printf("The condition is true");
        }
    }

    return 0;
}
