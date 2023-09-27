#include <stdio.h>

//Напишете програма каде што за внесен број ќе се провери дали бројот е парен или делив со 5
int main()
{

    int number;
    
    scanf("%d", &number);
    
    if(number%2==0 || number%5==0){
        printf("The number is divisible with 2 or 5");
    }

    return 0;
}
