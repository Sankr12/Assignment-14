//Write a function to calculate the number of Arrangements one can make from n items and r selected at a time. (TSRS)
#include<stdio.h>
int factorial(int);
int Arrangements(int , int);
int main()
{
    int a,b,res;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    res = Arrangements(a,b);
    printf("Arrangements of %d in %d = %d\n",b,a,res);
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
int Arrangements(int a,int b) //take something
{
    int i,j,k,l;
    i = factorial(a);
    j = a-b;
    k = factorial(j);
    l = i/k;
    return l; //Return something
}
