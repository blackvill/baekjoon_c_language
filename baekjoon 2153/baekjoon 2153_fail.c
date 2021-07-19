#include <stdio.h>
#include <string.h>

void is_prime(int nb)
{
	long long i;
	long long ll_nb;

	ll_nb = (long long)nb;
	if (ll_nb <= 1)
		printf("It is not a prime word.");
	i = 2;
	while (i * i <= ll_nb)
	{
		if (ll_nb % i == 0)
			printf("It is not a prime word.");
		i += 1;
	}
	printf("It is a prime word.");
}

int stoi(char str)
{
    int n;
    
    if (str >= 'a' && str <= 'z')
        n = str - 'a' + 1;
    else if (str >= 'A' && str <= 'Z')
        n = str - 'A' + 27;
    return (n);
}

int main(void)
{
    char str[20] = {0, };
    int sum = 0;

    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++)
    {
        sum += stoi(str[i]);
    }
    is_prime(sum);
}