#include <stdio.h>

int	ft_sqrt(int nb)
{
	long long i;
	long long ll_nb;

	ll_nb = (long long)nb;
	if (ll_nb <= 0)
		return (0);
	i = 1;
	while (i * i <= ll_nb)
	{
		if (i * i == ll_nb)
			return (i);
		i += 1;
	}
	return (0);
}

int main(void)
{
    int n;
    
    scanf("%d", &n);
    printf("%d", ft_sqrt(n));
}