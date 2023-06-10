//Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int LCM(int, int);
int main()
{
    int k,m,n,l;
    printf("Enter two numbers: ");
    scanf("%d %d",&k,&m);
    n = LCM(k,m);
    printf("LCM of %d and %d = %d",k,m,n);
}
int LCM(int x, int y)
{
    int a=2,b=1,c;
    while(a<=x || a<=y)
    {
        if(x%a==0 && y%a==0)
        {
            b=b*a;
            x=x/a;
            y=y/a;
        }
        else if(x%a==0 && y%a!=0)
        {
            b=b*a;
            x=x/a;
        }
        else if(x%a!=0 && y%a==0)
        {
            b=b*a;
            y=y/a;
        }
        else
            a++;
    }
    return b;
}
