#include <stdio.h>

int main(void)
{
    int a, b, c;
    int power_a, power_b, power_c;

    while (1)
    {
        scanf("%d%d%d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0)
            break;
        power_a = a * a;
        power_b = b * b;
        power_c = c * c;
        if (power_a + power_b == power_c || power_a + power_c == power_b || power_c + power_b == power_a)
            printf("right\n");
        else
            printf("wrong\n");
    }
}