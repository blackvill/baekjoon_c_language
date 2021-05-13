#include <stdio.h>

int main(void)
{
    int n;
    int m;
    int package;
    int one;
    int pack = 1000;
    int solo = 1000;
    int i = 0;
    
    scanf("%d%d", &n, &m);

    while (i < m)
    {
        scanf("%d%d", &package, &one);
        if (pack > package)
            pack = package;
        if (solo > one)
            solo = one;
        i++;
    }

    package = n / 6;
    one = n % 6 ;

    if (one * solo >= pack) {
		printf("%d", pack * package + pack);
	}
	else if (solo * 6 < pack) {
		printf("%d", n * solo);
	}
	else {
		printf("%d", package * pack + one * solo);
	}
}