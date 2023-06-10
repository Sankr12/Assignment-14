//Write a function to calculate the factorial of a number.(TSRS)
#include<stdio.h>
int factorial(int);
int main()
{
    int fac,result;
    printf("Enter a Number for factorial: ");
    scanf("%d",&fac);
    result = factorial(fac);
    printf("Factorial of %d = %d\n",fac,result);
}
int factorial(int a) //take something
{
    int b=1,c=1;
    while(b<=a)
    {
        c=c*b;
        b++;
    }
    return c;
}
