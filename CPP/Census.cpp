#include <iostream>
#include<cstring>
#define SIZE 2
using namespace std;

class census
{
    char city[30];
    long population;
    float literacy_level;
public:
    void read();
    void sort_alphabetically();
    void sort_literacy();
    void sort_population();
    void display();
};

void census :: read()
{
    int i;
    cout<<"Enter the details of "<<SIZE<<" cities below:"<<endl;
    for (i = 0; i < SIZE; i++)
    {
        cout<<"City Name: ";
        cin>>city;
        cout<<"Population: ";
        cin>>population;
        cout<<"Literacy Level: ";
        cin>>literacy_level;
    }
}

void census :: sort_alphabetically()
{
    int i, j;
    census t;
    for (i = 0; i < SIZE - 1; i++)
    {
        for (j = i + 1; j < SIZE; j++)
        {
            if (strcmp(city, city) > 0)
            {
                t = cities[i];
                cities[i] = cities[j];
                cities[j] = t;
            }
        }
    }
}

void census :: sort_literacy()
{
    int i, j;
    census t;
    for (i = 0; i < SIZE - 1; i++)
    {
        for (j = i + 1; j < SIZE; j++)
        {
            if (literacy_level < literacy_level)
            {
                t = cities[i];
                cities[i] = cities[j];
                cities[j] = t;
            }
        }
    }
}

void census :: sort_population()
{
    int i, j;
    struct census t;
    for (i = 0; i < SIZE - 1; i++)
    {
        for (j = i + 1; j < SIZE; j++)
        {
            if (population < population)
            {
                t = cities[i];
                cities[i] = cities[j];
                cities[j] = t;
            }
        }
    }
}

void census :: display()
{
    int i;
    cout<<"+-------------------------------------------------------------------+"<<endl;
    //cout<<"|%-30s|%-15s|%-20s|\n", "City", "Population", "Literacy Rate");
    cout<<"+-------------------------------------------------------------------+"<<endl;

    for (i = 0; i < SIZE; i++)
    {
        //cout<<"|%-30s|%15ld|%20.2f|\n", city, population, literacy_level;
    }
    cout<<"+-------------------------------------------------------------------+"<<endl;
}

int main()
{
    census cities[SIZE];
    for(int i=0; i<SIZE; i++)
        cities[i].read();
        
    cout<<endl<<"Unsorted list:"<<endl;
    display();
    sort_alphabetically();
    cout<<endl<<"List sorted as per alphabetical order:"<<endl;
    display();
    sort_literacy();
    cout<<endl<<"List sorted as per literacy level:"<<endl;
    display();
    sort_population();
    cout<<endl<<"\nList sorted as per population:"<<endl;
    display();
    return 0;
}