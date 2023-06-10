//Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int HCF(int, int);
int main()
{
    int k,m,n,l;
    printf("Enter two numbers: ");
    scanf("%d %d",&k,&m);
    n = HCF(k,m);
    printf("HCF of %d and %d = %d\n",k,m,n);
}
int HCF(int x, int y)
{
    int a=2,b=1,c;
    if(x==1 || y==1)
        b = 1;
    while(a<=x || a<=y)
    {
        if(x%a==0 && y%a==0)
        {
            b=b*a;
            x=x/a;
            y=y/a;
        }
        else
            a++;
    }
    return b;
}
