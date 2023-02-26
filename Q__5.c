#include<stdio.h>
int n;
int checkprime(int x)
{
    if(x<2)
    {
        return 0;
    }
   for(int i = 2;i<=(x/2);i++)
    {
        if(x%i==0)
        return 0;
    }
    return 1;
}
void primenumbers(int n)
{
    int count = 0;
    int x = 2;
    while(count<n)
    {
        if(checkprime(x))
        {
            printf("%d\n",x);
            count++;
        }
        x++;
    }
}
int main()
{
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("The first %d prime numbers are :-\n",n);
    primenumbers(n);
    return 0;
}
