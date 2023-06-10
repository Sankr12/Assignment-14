//Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
#include<stdio.h>
int number(int);
int main()
{
    int m,n;
    printf("Enter a Number: ");
    scanf("%d",&m);
    n = number(m);
    printf("%d\n",n);
    return 0;
}
int number(int num)   //take something
{
    if(num%2==0)
        return 1;
    else
        return 0;   //return something
}
