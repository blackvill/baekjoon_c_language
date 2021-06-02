#include <stdio.h>
#include <math.h>

int main(void)
{
    int t;
    int x1, y1, r1;
    int x2, y2, r2;
    int result;
    double dis, sub; //거리, 뺄셈

    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        if (r1 >= r2)
            sub = r1 - r2;
        else if (r1 < r2)
            sub = r2 - r1;
        if (dis == 0 && r1 == r2)
            result = -1;
        else if (dis < r1 + r2 && (sub < dis))
            result = 2;
        else if (dis == r1 + r2 || dis == sub)
            result = 1;
        else
            result = 0;
        printf("%d\n", result);
    }
}