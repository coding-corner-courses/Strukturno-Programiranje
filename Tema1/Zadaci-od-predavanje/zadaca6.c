#include <stdio.h>
#include <math.h>

//Задача6
//Да се внесат преку тастатура трите страни на разностран триаголник
//и да се пресмета плоштината на триаголникот по херонова формула.
//Да се испечати добиениот резултат на екран.
int main()
{

    float a,b,c;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    float s = (a+b+c)/2;

    float p = sqrt(s * (s-a) * (s-b) *(s-c));

    printf("The result is: %.2f", p);

    return 0;
}
