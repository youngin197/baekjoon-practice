#include<stdio.h>

typedef struct value {
    int row;
    int col;
    int flag;
} fraction;

fraction GoUp(fraction a);
fraction GoDown(fraction a);

int main(void)
{
    int input;
    int i=1; 
    fraction output;

    scanf("%d", &input);

    output.row = 1; output.col = 1;
    output.flag =0; //0이면 GoUp, 1이면 GoDown

    while(i<input) {
        if(output.flag == 0) {
            output = GoUp(output);
        }
        else if(output.flag == 1) {
            output = GoDown(output);
        }
        i++;
    }

    printf("%d/%d", output.row, output.col);

    return 0;
}

fraction GoUp(fraction a) //a가 row, b가 col
{
    fraction u;
    u.row = a.row;
    u.col = a.col;

    if(u.row==1) {
        u.row = 1;
        u.col++;
        u.flag = 1;
        return u;
    }

    u.row--;
    u.col++;
    u.flag = 0;

    return u;
}

fraction GoDown(fraction a) //a가 row, b가 col
{
    fraction d;
    d.row = a.row;
    d.col = a.col;

    if(d.col == 1) {
        d.row++;
        d.col = 1;
        d.flag = 0;
        return d;
    }

    d.row++;
    d.col--;
    d.flag = 1;

    return d;
}