#include<stdio.h>
void input(int d, int m, int y);
void display();

struct date
{
    int dd;
    int mm;
    int yyyy;
}dt;           //Global declaration

//struct date dt;   //Global declaration

int main()
{
    input(27,5,2021);
    display();
    return 0;
}

void input(int d, int m, int y)
{
    dt.dd = d;
    dt.mm = m;
    dt.yyyy = y;
}

void display()
{
    printf("%d-%d-%d", dt.dd, dt.mm, dt.yyyy);
}