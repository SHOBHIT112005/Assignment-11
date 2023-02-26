#include<stdio.h>
int x;
int next(int)
{
    int n,f,i;
    if(x%2!=0)
    {
        for(n = x+1;n<x+4;n++)
        {
            for(i=2;i<n;i++)
            {
                if(n%i!=0)
                f = 1;
            }

        }
    }
    else
    {
        for(n = x;n<x+3;n++)
        {
            for(i=2;i<n;i++)
            {
                if(n%i!=0)
                f = 1;
            }

        }
    }
    if (f==1)
    return n;
}
int main()
{
    printf("Enter a number\n");
    scanf("%d",&x);
    int n = next(x);
    printf("The next prime number is %d",n);
    return 0;
}