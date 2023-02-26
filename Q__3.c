#include<stdio.h>
int x;
void check(int x)
{
    int i,f;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        f=1;
    }
    if(f==1)
    printf("This is not prime number");
    else
    printf("This is a prime number");
}
int main()
{
    printf("Enter a number\n");
    scanf("%d",&x);
    check(x);
    return 0;
}