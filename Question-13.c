//Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
#include<stdlib.h>
void firstNprime(int);
int isprime(int);
int main()
{
    int k,n;
    printf("Enter a number: ");
    scanf("%d",&k);
    firstNprime(k);
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

void firstNprime(int a) // take something
{
    int b=2,c=0;
    while(c<a)
    {
        if(isprime(b)){
            printf("%d\n",b);
            c++;
    }
    b++;
    }
}     // Return Nothing


