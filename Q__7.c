#include<stdio.h>
int n;
void fabo(int x)
{
    int count,y = 0,z;
    x = 1;
    for(count = 1;count<n;count++)
    {
        z = x+y;
        y = x;
        x = z;
        printf("%d\n",z);
    }
}
int main()
{
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("The %d terms of fibonacci series are\n1\n",n);
    fabo(n);
    return 0;
}