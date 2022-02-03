#include<stdio.h>
#include<string.h>

// 아스키 코드 상으로 영어 대소문자 차이는 32만큼 차이 남
// A는 65, a는 97, Z는 90, z는 122
int main(void)
{
    int max, len, num, result = 0;
    int p=0;
    char input[1000000];
    int alphabet[26] = {0, }; // 각 알파벳의 갯수를 담은 배열
    
    scanf("%s", input);
    len = strlen(input);

    for(int i=0; i<len; i++) {
        if(input[i] >= 'a' && input[i] <= 'z') { // 소문자인 경우
            num = input[i] - 'a';
        }
        else if(input[i] >= 'A' && input[i] <= 'Z') { // 대문자인 경우
            num = input[i] - 'A';
        }
        alphabet[num]++;
    } // 각 알파벳의 갯수가 몇 개인지 입력 완료

    max = alphabet[0];
    for(int t=1; t<26; t++) {
        if(max < alphabet[t]) { 
            max = alphabet[t];
            p = t;
        }
    } // 알파벳 중 가장 많은 것을 알아내는 반복문

    for(int i=0; i<26; i++) {
        if(alphabet[i] == max) result++;
    }

    if(result > 1) printf("?\n");
    else printf("%c", p+'A');

    return 0;
}

