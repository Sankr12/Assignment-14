//Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void natural_num(int);
int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    natural_num(num);
    return 0;
}
void natural_num(int a)   //take something
{
    int b=1,c=1;
    while(b<=a)
     {
         printf("%d\n",c);
         c=c+2;
         b++; //return nothing
     }
}
