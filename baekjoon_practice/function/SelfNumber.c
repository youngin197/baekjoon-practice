#include<stdio.h>

int d(int n)
{
    int sum = 0;
    while(n > 0){
        sum = sum + (n % 10);
        n = n/10;
    }
    return sum;
}

int main(void)
{
    int i;
    int check = 0;
    int arr[10001] = {0, };
    
    for(i=0; i< 10001; i++) {
        check = d(i);
        if(check < 10001)
            arr[check] = 1;
    } // 10000칸의 배열에 self number가 아닌 것들은 그 배열 값을 1로 바꿈
    
    for(i=0; i<10001; i++){
        if(arr[i] == 0)
            printf("%d\n", i);
    }
    return 0;
}