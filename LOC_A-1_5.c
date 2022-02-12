#include<stdio.h>
 
#define PI 3.14
 
int main()
{
  float radius, diameter, circumference, area;
 
  printf("\n Enter the radius of a circle : ");
  scanf("%f",&radius);
 
  diameter = 2 * radius;
  circumference = 2 * PI * radius;
  area = PI * radius * radius; 
 
  printf("\n Diameter Of a Circle = %f", diameter);
  printf("\n Circumference Of a Circle = %f", circumference);
  printf("\n Area Of a Circle = %f", area);
 
  return 0;
}
