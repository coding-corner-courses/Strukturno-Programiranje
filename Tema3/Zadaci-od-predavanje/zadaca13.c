#include <stdio.h>
#include <math.h>

//Напишете програма каде што за внесен број ќе се провери дали бројот е делив со 7,
// ако е делив со 7 да се пресмета неговиот квадрат, ако не е делив да се пресмета неговиот корен.
int main()
{
    int number;

    scanf("%d", &number);

    double result;

    if(number % 7 == 0)
    {
        result = pow(number,2);
    }
    else
    {
        result=sqrt(number);
    }

    printf("The result is %.2f", result);

    return 0;
}
