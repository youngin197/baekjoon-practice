#include<stdio.h>

int main(void)
{
    int stat, val, price;
    int num = 0, sub;

    scanf("%d %d %d", &stat, &val, & price);

    if(price <= val) { // 손익분기점이 없는 경우
        printf("-1");
        return 0;
    }

    sub = price - val;
    num = stat/sub;
    num++;

    printf("%d", num);
    
    return 0;

}