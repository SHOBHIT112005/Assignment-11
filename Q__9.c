#include<stdio.h>
#include<math.h>
int x;
int square(int x)
{
    return pow(x,2);
}
int main()
{
    printf("Enter a number\n");
    scanf("%d",&x);
    int n = square(x);
    printf("The square of entred number is %d",n);
}