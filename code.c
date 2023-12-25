#include<stdio.h>
#include<conio.h>
int main()
{
    float side,area;
    printf("Enter sides of an equilateral triangle :");
    scanf("%f",&side);
    area=(1.73*side*side)/4;
    printf("The area of an Equilateral triangle is %f",area);
    return 0;
}