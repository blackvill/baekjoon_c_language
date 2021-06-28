#include <stdio.h>

int main(void)
{
    int t;
    int hp, mp, atk, grd;
    int item_hp, item_mp, item_atk, item_grd;
    int changed_hp, changed_mp, changed_atk, changed_grd;
    int power;

    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d %d %d %d %d %d", &hp, &mp, &atk, &grd, &item_hp, &item_mp, &item_atk, &item_grd);
        changed_hp = hp + item_hp;
        changed_mp = mp + item_mp;
        changed_atk = atk + item_atk;
        changed_grd = grd + item_grd;
        if (changed_hp < 1)
            changed_hp = 1;
        if (changed_mp < 1)
            changed_mp = 1;
        if (changed_atk < 0)
            changed_atk = 0;
        power = 1 * changed_hp + 5 * changed_mp + 2 * changed_atk + 2 * changed_grd;
        printf("%d\n", power);
    }
}