#include <stdio.h>
#include <math.h>

//Задача5
//Да се внесат коефициентите на квадратна равенка и да се пресмета нејзината дискриминанта.
//Да се испечатат внесените коефициенти и добиеното решение на екран.
//d=b^2-4ac

int main()
{
    int b,a,c;

    scanf("%d", &b);
    scanf("%d", &a);
    scanf("%d", &c);

    int result = pow(b,2) - 4*a*c;

    printf("The constants are: %d %d %d\n", b,a,c);
    printf("Discriminant: %d", result);

    return 0;
}
