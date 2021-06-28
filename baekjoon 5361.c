#include <stdio.h>

int main(void)
{
    int t;
    int a, b, c, d, e;
    double price;

    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        price = 0;
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
        price = a * 350.34 + b * 230.90 + c * 190.55 + d * 125.30 + e * 180.90;
        printf("$%.2f\n", price);
    }
}