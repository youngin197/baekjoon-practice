#include<stdio.h>

int main(void)
{
    char InputS[100] = {0};
    int i;

    scanf("%s", InputS);

    for(i=97; i<=122; i++) {
        int j = 0;
        while(InputS[j] != 0) {
            if(InputS[j] == (char) i) break;
            j++;
        }
        if(InputS[j] == (char) i) printf("%d ", j);
        else printf("-1 ");
    }
}