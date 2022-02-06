#include <stdio.h>

int FindHotelRoom(int h, int w, int n);

int main(void)
{
    int test;
    int h, w, n, room;

    scanf("%d", &test);

    for (int i = 0; i < test; i++)
    {
        scanf("%d %d %d", &h, &w, &n);
        room = FindHotelRoom(h, w, n);
        printf("%d\n", room);
    }

    return 0;
}

int FindHotelRoom(int h, int w, int n)
{
    int front, back;
    int room;

    front = n % h;
    back = n / h + 1;

    if (front == 0) front = h;
    if ( (n % h) == 0 ) back = n / h;

    room = (front * 100) + back;

    return room;
}