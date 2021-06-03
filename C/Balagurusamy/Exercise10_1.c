#include<stdio.h>
struct time_struct
{
    int hour;
    int minute;
    int second;
}t;                             //Global declaration

//struct time_struct t;       //Global declaration
void input();
void display();

int main()
{
    input();
    display();
    return 0;
}

void input()
{
    printf("Enter hour: ");
    scanf("%d", &t.hour);
    printf("Enter minute: ");
    scanf("%d", &t.minute);
    printf("Enter second: ");
    scanf("%d", &t.second);
}

void display()
{
    printf("%02d:%02d:%02d\n", t.hour, t.minute, t.second);
}