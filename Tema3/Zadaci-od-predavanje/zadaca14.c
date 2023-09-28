#include <stdio.h>
#include <math.h>

//Напишете програма каде што ќе може да се внесе број од 1 до 7 и за истиот да се испечати соодветниот ден во неделата.
int main()
{
    int number;

    scanf("%d", &number);

    switch(number)
    {
    case 1:
        printf("Ponedelnik");
        break;
    case 2:
        printf("Vtornik");
        break;
    case 3:
        printf("Sreda");
        break;
    case 4:
        printf("Cetvrtok");
        break;
    case 5:
        printf("Petok");
        break;
    case 6:
        printf("Sabota");
        break;
    case 7:
        printf("Nedela");
        break;
    default:
        printf("Ne ste vnele validen broj");
        break;
    }

    return 0;
}
