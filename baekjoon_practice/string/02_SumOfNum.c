#include<stdio.h>

int main(void)
{
    int j;
    int i = 0, sum = 0;
    char num[100];

    scanf("%d", &i);
    scanf("%s", num);
    for(j=0; j<i; j++) {
        sum += ((int)num[j] - 48);    
    }   

    printf("%d\n",sum);
    return 0;
}