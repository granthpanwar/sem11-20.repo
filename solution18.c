//Write a program to assign grades based on a percentage input.
#include <stdio.h>
int main()
{
    int a;
    printf("enter the marks obtained \n");
    scanf("%d",&a);

    if(a>90)
    {
        printf("grade A");
    }

    else if(a>80 && a<=90)
    {
        printf("grade B");
    }

    else if(a>70 && a<=80)
    {
        printf("grade c");
    }

    else if(a>60 && a<=70)
    {
        printf("grade D");
    }

    else if(a>50 && a<=60)
    {
        printf("grade E");
    }

    else if(a>40 && a<=50)
    {
        printf("grade F");
    }
}