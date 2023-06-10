//Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float Area(int);
int main()
{
   int x;
   float y;
   printf("Enter Radius of Circle: ");
   scanf("%d",&x);
   y = Area(x);
   printf("Area of Circle = %f\n",y);
   return 0;
}
float Area(int a)  //take something
{
    float c;
    c = 3.14*a*a;
    return c;  //Return Something
}
