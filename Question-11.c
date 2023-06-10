//Write a function to check whether a given number is prime or not. (TSRS)
#include<stdio.h>
int isprime(int);
int main()
{
    int k,n;
    printf("Enter a number: ");
    scanf("%d",&k);
    n = isprime(k);
    if(n==1)
        printf("%d is a prime Number\n",k);
    else
        printf("%d is not a prime Number\n",k);
    return 0;
}
int isprime(int x)
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
        return 0;
}
