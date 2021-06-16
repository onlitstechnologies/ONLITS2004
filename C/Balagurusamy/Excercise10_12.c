#include<stdio.h>
#include<string.h>
#define SIZE 2
struct census
{
    char city[30];
    long population;
    float literacy_level;
};

struct census cities[SIZE];

void read();
void sort_alphabetically();
void sort_literacy();
void sort_population();
void display();

int main()
{
    read();
    printf("\nUnsorted list:\n");
    display();
    sort_alphabetically();
    printf("\nList sorted as per alphabetical order:\n");
    display();
    sort_literacy();
    printf("\nList sorted as per literacy level:\n");
    display();
    sort_population();
    printf("\nList sorted as per population:\n");
    display();
    return 0;
}

void read()
{
    int i;
    printf("Enter the details of %d cities below:\n", SIZE);
    for(i=0; i<SIZE; i++)
    {
        printf("%d.\n", i+1);
        printf("City Name: ");
        scanf("%[^\n]", cities[i].city);
        printf("Population: ");
        scanf("%ld", &cities[i].population);
        printf("Literacy Level: ");
        scanf("%f%*c", &cities[i].literacy_level);
    }
}

void sort_alphabetically()
{
    int i,j;
    struct census t;
    for(i=0; i<SIZE-1; i++)
    {
        for(j=i+1; j<SIZE; j++)
        {
            if(strcmp(cities[i].city, cities[j].city) > 0)
            {
                t = cities[i];
                cities[i] = cities[j];
                cities[j] = t;
            }
        }
    }
}

void sort_literacy()
{
    int i,j;
    struct census t;
    for(i=0; i<SIZE-1; i++)
    {
        for(j=i+1; j<SIZE; j++)
        {
            if(cities[i].literacy_level<cities[j].literacy_level)
            {
                t = cities[i];
                cities[i] = cities[j];
                cities[j] = t;
            }
        }
    }
}

void sort_population()
{
    int i,j;
    struct census t;
    for(i=0; i<SIZE-1; i++)
    {
        for(j=i+1; j<SIZE; j++)
        {
            if(cities[i].population<cities[j].population)
            {
                t = cities[i];
                cities[i] = cities[j];
                cities[j] = t;
            }
        }
    }
}

void display()
{
    int i;
    printf("+-------------------------------------------------------------------+\n");
    printf("|%-30s|%-15s|%-20s|\n","City","Population","Literacy Rate");
    printf("+-------------------------------------------------------------------+\n");

    for(i=0; i<SIZE; i++)
    {
        printf("|%-30s|%15ld|%20.2f|\n", cities[i].city, cities[i].population, cities[i].literacy_level);
    }
    printf("+-------------------------------------------------------------------+\n");
}