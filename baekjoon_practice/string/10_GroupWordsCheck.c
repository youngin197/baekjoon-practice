#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    int num;
    char arr[100][100];
    int cnt = 0;
    int flag, len;

    scanf("%d", &num);
    for(int i=0; i<num; i++) {
        scanf("%s", arr[i]);
    }

    for(int i=0; i<num; i++) {
        len = strlen(arr[i]);
        flag = 1;
        for(int j=0; j<len; j++) {
            if(arr[i][j] != arr[i][j+1]) {  // 이게 핵심 문장
                for(int k=j+1; k<len; k++) {
                    if(arr[i][j] == arr[i][k]) {
                        flag = 0;
                    }
                }
            }
        } 
        if(flag == 1) cnt++; // 그룹 단어인 경우
    }

   printf("%d", cnt);

   return 0;
}