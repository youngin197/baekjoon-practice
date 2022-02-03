#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    char input[101];
    int i = 0;
    int cnt =0;

    scanf("%s", input);

    while(input[i] != 0) {
        if ( input[i] == 'c') {
            if(input[i+1] == '=') {
                i++;
                cnt++;
            }
            else if(input[i+1] == '-') {
                i++;
                cnt++;
            }
            else cnt++;
        }
        else if (input[i] == 'd') {
            if(input[i+1] == '-') {
                i++;
                cnt++;
            }
            else if(input[i+1] == 'z' && input[i+2] == '=') {
                i = i + 2;
                cnt++;
            }
            else cnt++;
        }
        else if (input[i] == 'l') {
            if(input[i+1] == 'j') {
                i++;
                cnt++;
            }
            else cnt++;
        }
        else if (input[i] == 'n') {
            if(input[i+1] == 'j') {
                i++;
                cnt++;
            }
            else cnt++;            
        }
        else if (input[i] == 's') {
            if(input[i+1] == '=') {
                i++;
                cnt++;
            }
            else cnt++;
        }
        else if (input[i] == 'z') {
            if(input[i+1] == '=') {
                i++;
                cnt++;
            }
            else cnt++;
        }
        else {
            cnt++;
        }
        i++;
    }
    printf("%d", cnt);

    return 0;
}