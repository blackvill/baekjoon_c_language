#include <stdio.h>

int	ft_is_prime(int nb)
{
	long long i;
	long long ll_nb;

	ll_nb = (long long)nb;
	if (ll_nb <= 1)
		return (0);
	i = 2;
	while (i * i <= ll_nb)
	{
		if (ll_nb % i == 0)
			return (0);
		i += 1;
	}
	return (1);
}

int main(void)
{
    int n, m;
    int sum = 0;
    int min;

    scanf("%d%d", &n, &m);
    min = m;
    while (n < m)
    {
        if (ft_is_prime(n))
        {
            sum += n;
            if (min > n)
                min = n;
        }
        n++;
    }
    if (sum != 0)
        printf("%d\n%d", sum, min);
    else
        printf("-1");
}