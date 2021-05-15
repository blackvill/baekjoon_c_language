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
    int n;
    int result;
    int prime = 2;

    scanf("%d", &n);
    result = n;

    while (result > 1)
    {
        if (ft_is_prime(prime))
        {
            if (result % prime == 0)
            {
                printf("%d\n", prime);
                result /= prime;
                prime = 2;
            }
            else
                prime++;
        }
        else
            prime++;
    }
}