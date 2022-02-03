#include<stdio.h>

int main(void)
{
    int input;
    int n = 0;

    scanf("%d", &input);

    if(input == 1) {
        printf("1");
        return 0;
    }

    while(input > 0) {
        if(input == 1) {
            break;
        }
        n++;
        input = input - (6*n);  
    }
    n++;

    printf("%d", n);

    return 0;
}
