#include <cs50.h>
#include <stdio.h>

typedef struct
{
    string name;
    int month;
    int day;
}
birthday;

int main(void)
{
    birthday birthdays[2];
    birthdays[0].name = "David";
    birthdays[0].month = 1;
    birthdays[0].day = 2;
    
    printf("Name: %s", birthdays[0].name);
}
