#include <stdio.h>

int main()
{
    char input_str[20];
    int num=0;
    int i;

    scanf("%s", input_str);
    for(i=0; input_str[i] != '\0'; i++)
    {
        if(input_str[i] >= 65 && input_str[i] <= 67)
            num += 3;
        else if(input_str[i] >= 68 && input_str[i] <= 70)
            num += 4;
        else if(input_str[i] >= 71 && input_str[i] <= 73)
            num += 5;
        else if(input_str[i] >= 74 && input_str[i] <= 76)
            num += 6;
        else if(input_str[i] >= 77 && input_str[i] <= 79)
            num += 7;
        else if(input_str[i] >= 80 && input_str[i] <= 83)
            num += 8;
        else if(input_str[i] >= 84 && input_str[i] <= 86)
            num += 9;
        else if(input_str[i] >= 87 && input_str[i] <= 90)
            num += 10;
    }
    printf("%d", num);
}