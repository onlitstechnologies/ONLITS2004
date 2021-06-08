#include<stdio.h>
struct census
{
    char city[30];
    long population;
    float literacy_level;
}cities[5];

void read();

int main()
{
    read();
}

void read()
{
    int i;
    printf("Enter the details of 5 cities below:\n");
    for(i=0; i<5; i++)
    {
        printf("%d.\n", i+1);
        printf("City Name: ");
        scanf("%[^\n]", cities[i].city);
        printf("Population: ");
        scanf("%ld", &cities[i].population);    //bug
        printf("Literacy Level: ");
        scanf("%f", &cities[i].literacy_level);
    }
}