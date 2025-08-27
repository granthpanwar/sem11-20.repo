//Write a program to input three numbers and find the largest among them using if–else
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter first  second and third number\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c )
    {
        printf("the greatest is %.2d \n",a);
    }
    if(b>c && b>a )
    {
        printf("the greatest is %.2d \n",b);
    }
    if(c>a && c>b )
    {
        printf("the greatest is %.2d \n",c);
    }
}

    
