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
    int i = 0;
    int arr[1001] = {0, };
    int count = 0;

    scanf("%d", &n);
    while (i < n)
    {
        scanf("%d", &arr[i]);
        i++;
    }
    i = 0;
    while (i < n)
    {
        if (ft_is_prime(arr[i]))
            count++;
        i++;
    }
    printf("%d", count);
}