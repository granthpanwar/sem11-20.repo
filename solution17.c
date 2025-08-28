//Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>
int main()
{
    float a;
    float b;
    float c;
    float d;
    float root1;
    float root2;
    printf("enter the coefficient of x^2 \n");
    scanf("%f",&a);
    printf("enter the coefficient of x \n");
    scanf("%f",&b);
    printf("enter the coefficient of c \n");
    scanf("%f",&c);
    d = b * b - 4 * a * c;     // calculating determinants
    if(d==0)
    {
        printf("the roots are real and equal \n");
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    }
    if(d>0)
    {
        printf("the roots are real and different \n");
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    }
    if(d<0)
    {
        printf("the roots are complex numbers");
    }
    
}