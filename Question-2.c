//Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float SI(int,int,int);
int main()
{
    int p,r,t;
    float s;
    printf("Enter the value for Principal, Rate and Time: ");
    scanf("%d %d %d",&p,&r,&t);
    s = SI(p,r,t);
    printf("Simple Interest = %f\n",s);
    return 0;
}
float SI(int a,int b,int c)   //Take something
{
    float d,e;
    d = a*b*c;
    e=d/100;
    return e;   //Return Something
}
