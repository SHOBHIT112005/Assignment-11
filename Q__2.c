#include<stdio.h>
int N,M;
int hcm(int N,int M)
{
    int x;
    if(N<M)
    {
        for(x=N;x>=1;x--)
        {
            if((N%x==0)&&(M%x==0))
            {
                printf("HCM of %d and %d is %d",N,M,x);
                break;
            }
        }
    }
    else
    {
        for(x=M;x>=1;x++)
        {
            if((N%x==0)&&(M%x==0))
            {
                printf("HCM of %d and %d is %d",N,M,x);
                break;
            }
        }
    }
    return x;
}
int main()
{
   printf("Enter two numbers\n");
   scanf("%d\n%d",&N,&M);
   int y = hcm(N,M);
   return 0;
}