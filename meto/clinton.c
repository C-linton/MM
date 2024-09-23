#include <stdio.h>
#define PI 3.14
void main()
{
   int r, area;
   printf("Enter the radius of circle: ");
   scanf("%d", &r);
   area = PI * (r * r);
   printf("Area of the circle = %d", area);
}