#include <stdio.h>

//Напиши програма каде преку тастатура ќе биде внесен цел број.
//Доколку бројот е поголем од 5 и е делив со 5, отпечати “Bingo!”.
//Реши ја задачата со и без вгнезден if израз.
int main()
{

    int number;

    scanf("%d", &number);

//    if(number>5){
//        if(number%5==0){
//            printf("Bingo!");
//        }
//    }

    if(number>5 && number%5==0){
        printf("Bingo!");
    }
}
