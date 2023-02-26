#include<stdio.h>
int N,M;
int lcm(int N,int M)
{
    int x;
    for(x=1;x<=N*M;x++)
    {
        if((x%N==0)&&(x%M==0))
        {
            printf("LCM of %d and %d is %d",N,M,x);
            break;
        }
    }
    return x;
}
int main()
{
   printf("Enter two numbers\n");
   scanf("%d\n%d",&N,&M);
   int y = lcm(N,M);
   return 0;
}