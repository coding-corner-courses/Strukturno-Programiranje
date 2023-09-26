#include <stdio.h>

//Напиши програма каде преку тастатура може да се внеси цел број.
//A.Доколку е внесен број делив со 38, отпечати “The number is divisible with 38”, во спротивно да не се печати ништо.
//B.Доколку е внесен број делив со 38, отпечати “The number is divisible with 38”,
int main()
{

    int number;

    scanf("%d", &number);

//    Решение за А.
//    if(number % 38 == 0){
//        printf("The number is divisible with 38 - %d",number);
//    }


//    Решение за В.
    if(number % 38 == 0)
    {
        printf("The number is divisible with 38 - %d",number);
    }
    else
    {
        printf("The number is not divisible with 38 - %d",number);
    }
}
