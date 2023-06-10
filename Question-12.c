//Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
#include<stdlib.h>
int nextprime(int);
int isprime(int);
int main()
{
    int k,n;
    printf("Enter a number: ");
    scanf("%d",&k);
    n = nextprime(k);
    printf("%d",n);
    return 0;
}
int isprime(int x) // Take something
{
    int a=2;
    if(x<0)
        x=-x;
    while(a<=x)
    {
        if(x%a==0)
            break;
        else
            a++;
    }
    if(a==x)
        return 1;
    else
        return 0; // Return Something
}
int nextprime(int x) // take something
{
    x++; // Here increasing the value taken by user
    while(!isprime(x))
    {
        x++;
    }
    return x; // return something
}

