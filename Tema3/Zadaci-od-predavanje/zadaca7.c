#include <stdio.h>

//Напиши програма каде преку тастатура ќе бидат внесени три цели броеви.
//Најди го најголемиот и најмалиот број и пресметај ја нивната сума.
int main()
{

    int number1, number2, number3;

    scanf("%d", &number1);
    scanf("%d", &number2);
    scanf("%d", &number3);

    int max,min;

    if(number1>number2 && number1>number3)
    {
        max=number1;
    }
    else if(number2>number1 && number2>number3)
    {
        max=number2;
    }
    else
    {
        max=number3;
    }

    if(number1<number2 && number1<number3)
    {
        min=number1;
    }
    else if(number2<number1 && number2<number3)
    {
        min=number2;
    }
    else
    {
        min=number3;
    }

    int result = min + max;

    printf("The result is %d", result);
}
