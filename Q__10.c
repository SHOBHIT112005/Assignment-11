#include<stdio.h>
int n,sum;
int fact(int n)
{
    int i;
    for(i=n-1;i>=1;i--)
    {
        n = n*i;
    }
    return n;
}
int add(int sum)
{
    sum = (fact(1))/1 + (fact(2))/2 + (fact(3))/3 + (fact(4))/4 + (fact(5))/5;
    return sum;
}
int main()
{
    int y = add(sum);
    printf("The required sum 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 = %d",y);
}