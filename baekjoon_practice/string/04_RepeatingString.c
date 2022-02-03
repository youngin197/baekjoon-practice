#include<stdio.h>
#include<string.h>

int main(void)
{
    int t;
    int RepeatNum;
    char input[20] = {0};
    int i, j, k;

    scanf("%d", &t); // t는 1이상 1000이하

    for(i=0; i<t; i++) {
        scanf("%d %s", &RepeatNum, input);

        for(j=0; j<strlen(input); j++) {
            for(k=0; k<RepeatNum; k++) {
                printf("%c", input[j]);
            }
        }
        printf("\n");
    }   
    return 0;
}