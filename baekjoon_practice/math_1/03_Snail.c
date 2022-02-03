#include<stdio.h>

int main(void)
{
    int up, down, top;
    int day = 0;

    // down < up <= top
    scanf("%d %d %d", &up, &down, &top);

    day = (top - down - 1) / (up - down) + 1;
    
    printf("%d", day);
    return 0;
}