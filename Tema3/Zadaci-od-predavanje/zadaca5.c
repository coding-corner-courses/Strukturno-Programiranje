#include <stdio.h>

//Напишете програма која ќе проверува дали внесен карактер е голема буква. Отпечатете го резултатот на екран.
// [65, 90] во ASCII
int main()
{

    char character;

    scanf("%c", &character);

    if((int)character >= 65 && (int)character <= 90){
        printf("The character is upper letter");
    }
}
