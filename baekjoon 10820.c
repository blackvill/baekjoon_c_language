#include<stdio.h>
#include<string.h>

int main()
{
    char buf[200];
    while (fgets(buf, sizeof(buf), stdin)!=NULL)
    {
        buf[strlen(buf) - 1] = 0;
        int l_count = 0, u_count = 0, n_count = 0, s_count = 0;
        int len = strlen(buf);
        for (int i = 0; i < len; ++i)
        {
            if (buf[i] >= 'A' && buf[i] <= 'Z')
                u_count++;
            else if (buf[i] >= 'a' && buf[i] <= 'z')
                l_count++;
            else if (buf[i] >= '0' && buf[i] <= '9')
                n_count++;
            else
                s_count++;
        }
        printf("%d %d %d %d\n", l_count, u_count, n_count, s_count);
    }
}
