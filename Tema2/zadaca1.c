#include <stdio.h>

//Направи програма каде што преку тастатура ќе се внесе цел број 
//и истиот ќе биде кастиран во карактер. Отпечати ја променетатат вредност.
int main()
{
    int number; 
    
    scanf("%d", &number);
    
    char character = (char) number;
    
    printf("the value is %c", character);

    return 0;
}
