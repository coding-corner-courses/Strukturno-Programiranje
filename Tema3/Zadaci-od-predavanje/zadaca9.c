#include <stdio.h>

//Напишете програма која ќе претставува калкулатор и за внесен аритметчки оператор ќе враќа резултат.
int main()
{

    // +, -, *, /
    char arithmeticOperator;
    int number1, number2;

    scanf("%c",&arithmeticOperator);
    scanf("%d",&number1);
    scanf("%d",&number2);

    double result;

    switch(arithmeticOperator)
    {
    case '+':
        result=number1+number2;
        break;
    case '-':
        result=number1-number2;
        break;
    case '*':
        result=number1*number2;
        break;
    case '/':
        result=(double)number1/number2;
        break;
    default:
        result=0;
    }

    printf("Result %.2f", result);

    return 0;
}
