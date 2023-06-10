//Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
#include<stdio.h>
int factorial(int);
int combinations(int , int);
int main()
{
    int a,b,res;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    res = combinations(a,b);
    printf("Combinations of %d in %d = %d\n",b,a,res);
    return 0;
}
int factorial(int x)
{
    int a,b=1;
    for(a=1;a<=x;a++)
    {
        b=b*a;
    }
    return b;
}
int combinations(int a,int b) //take something
{
    int i,j,k,l,m,n;
    i = factorial(a);
    j = factorial(b);
    n = a-b;
    k = factorial(n);
    l = i/j;
    m = l/k;
    return m; //Return something
}
