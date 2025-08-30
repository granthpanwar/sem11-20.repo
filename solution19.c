//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main() 
{
    float a,b,c;
    printf("enter the sides of triangle");
    scanf("%f %f %f", &a,&b,&c);

    if((a+b>c) && (b+c>a) && (a+c>b))
   
    {
        printf("the triangle is valid\n");

        if((a==b) && (b==c))
        {
            printf("the sides entered are of equilateral triangle\n");
        }

        else if(a==b || b==c || a==c)
        {
            printf("the sides are of isosceles triangle");
        }

        else if((a * a + b * b == c * c) || (b * b + c * c == a * a) || (c * c + a * a == b * b) )
        {
            printf("the sides are of right angles triangle\n");
        }

        else
        {
            printf("the sides are of scalene triangle\n");
        }
      
    }
    else
    {
        printf("the trianle is not valid");
    }

}