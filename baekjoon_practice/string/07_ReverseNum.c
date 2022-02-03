#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    char num1[4], num2[4];
    char rev1[4], rev2[4];
    int rev_num1, rev_num2;
    int j=2;

    scanf("%s", num1);
    scanf("%s", num2);


    for(int i=0; i<3; i++) {
        rev1[j] = num1[i];
        rev2[j] = num2[i];
        j--;
    }

    rev_num1 = atoi(rev1);
    rev_num2 = atoi(rev2);


    if(rev_num1 > rev_num2) printf("%d\n", rev_num1);
    else printf("%d\n", rev_num2);

    return 0;
}