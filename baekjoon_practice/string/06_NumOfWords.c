#include<stdio.h>
#include<string.h>

// 공백의 아스키 코드 값은 '32' 이다.

int main (void)
{
    char  arr[1000000];
    int cnt = 1;
    int i, j = 0, len;

    gets(arr);
    len = strlen(arr);

    if(arr[0] == ' ') { // 첫 글자에 공백이 있는 경우
        j++;
    }

    if(len == 1) { // * 키 포인트 부분 : 입력값이 스페이스 하나인 경우 0을 출력해줘야함
        if(arr[0] == ' ') {
            printf("0");
            return 0;
        }
    }

    if( arr[len-1] == ' ') len--; // 마지막에 공백이 있는 경우
    if(arr == 0) { //문자열이 NULL인 경우
        printf("0");
        return 0;
    }

    for(i=j; i< len; i++) {
        if(arr[i] == ' ') { // 공백이 있는 경우
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}