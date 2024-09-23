#include <stdio.h>
#define PI 3.14
void main()
{
   int r, area;
   printf("enter the number: ");
   scanf("%d",&r);
   area = PI * (r *r);
   printf("Area of the circle = %d", area);

}