#include <stdio.h>

int main(void)
{
    int t;
    int s; // car price
    int n; // all option count
    int q; // selection option count
    int p; // selection option price
    int price;

    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        price = 0;
        scanf("%d", &s);
        price += s;
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {
            scanf("%d %d", &q, &p);
            price += (q * p);
        }
        printf("%d\n", price);
    }
}