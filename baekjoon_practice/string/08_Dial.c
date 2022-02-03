#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    char input[16];
    int i = 0;
    int time =0;

    scanf("%s", input);
    while(input[i] != 0) {
        if(input[i] >= 'A' && input[i] <= 'C'){
            time = time + 3;
        }
        else if(input[i] >= 'D' && input[i] <= 'F'){
            time = time + 4;
        }
        else if(input[i] >= 'G' && input[i] <= 'I'){
            time = time + 5;
        }
        else if(input[i] >= 'J' && input[i] <= 'L'){
            time = time + 6;
        }
        else if(input[i] >= 'M' && input[i] <= 'O'){
            time = time + 7;
        }
        else if(input[i] >= 'P' && input[i] <= 'S'){
            time = time + 8;
        }
        else if(input[i] >= 'T' && input[i] <= 'V'){
            time = time + 9;
        }
       else {
            time = time + 10;
        }
        i++;
    }
    printf("%d\n",time);

    return 0;
}