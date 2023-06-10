//Write a function to print first N natural numbers (TSRN)
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
    int b=1;
    while(b<=a)
     {
         printf("%d\n",b);
         b++; //return nothing
     }
}
