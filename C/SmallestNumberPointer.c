#include <stdio.h>
#define SIZE 5
int main()
{
    int nos[SIZE], i, s, *p;
    p = nos;
    printf("Enter enter %d integegers below:\n", SIZE);
    for (i = 1; i <= SIZE; i++)
    {
        scanf("%d", p);
        if (i == 1)
        {
            s = *p;             //Working as initialization
        }
        else
        {
            if (s > *p)
            {
                s = *p;
            }
        }
        p++;
    }
    printf("The smallest number is %d.\n", s);
    return 0;
}