#include <stdio.h>

//Направи програма каде што преку тастатура ќе се внесaт два карактери,
//кастирај ги и пронајди ја нивната разлика. Отпечати го резултатот.
int main()
{
    char character1, character2;

    scanf("%c\n", &character1);
    scanf("%c", &character2);

    int result = character1 - character2;

    printf("The result is %d", result);

    return 0;
}
