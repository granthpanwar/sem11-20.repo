//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>
int main()
{
    int year;
    printf("enter a year \n");
    scanf("%d",&year);

    if(year%100==0)
    {
        printf("not a leap year");
    }
    else if (year%4==0)
    {
      printf("leap year");
    }
    else 
    {
        printf("not a leap year\n");
    }
}