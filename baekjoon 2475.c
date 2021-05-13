#include <stdio.h>

int ft_power(int n)
{
    return (n * n);
}

int main(void)
{
    int one, two, three, four, five;
    int power_sum;

    scanf("%d%d%d%d%d", &one, &two, &three, &four, &five);
    power_sum += ft_power(one);
    power_sum += ft_power(two);
    power_sum += ft_power(three);
    power_sum += ft_power(four);
    power_sum += ft_power(five);

    printf("%d", power_sum % 10);
}