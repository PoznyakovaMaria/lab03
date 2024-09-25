#include <locale.h>
#include <stdio.h>
#define D 2.54
#define U 2,32166
int main()
{
    int num, nm;
    setlocale(LC_ALL, "RUS");
    puts("¬ведите число");
    scanf_s("%d", &num);
    puts("¬ведено число A");
    puts("¬ведите число");
    scanf_s("%d", &nm);
    puts("¬ведено число ¬");
    printf("%d + %d = %d\n", num, nm, num + nm);
    printf("%d - %d = %d\n", num, nm, num - nm);
    printf("%d * %d = %d\n", num, nm, num * nm);
    printf("%d / %d = %d, остаток = %d\n", num, nm, num / nm, num % nm);
    int dym;
    float result;
    puts("¬ведите значение дл€ расчета");
    scanf_s("%d", &dym);
    result = D * dym;
    printf("%d дюймов - это %.1f см\n", dym, result);
    int spdym;
    float result2;
    puts("¬ведите значение дл€ расчета");
    scanf_s("%d", &spdym);
    result2 = U * spdym;
    printf("%d испанских дюймов - это %.1f см\n", spdym, result2);
    float a, b;
    puts("¬ведите число");
    scanf_s("%f", &a);
    puts("¬ведено число a");
    puts("¬ведите число");
    scanf_s("%f", &b);
    puts("¬ведено число b");
    puts("-------------------------\n");
    puts("| a*b\t | a+b\t | a-b\t|\n");
    puts("-------------------------\n");
    printf("| %2.f*%2.f\t| %2.f+%2.f\t| %2.f-%2.f\t|\n", a, b, a, b, a, b);
    puts("-------------------------\n");
    printf("| %3.f \t|  %3.f \t|  %3.f\t|\n", a * b, a + b, a - b);
    puts("-------------------------\n");
}