#include<stdio.h>
int a,b;
void primenumbers(int a,int b)
{
    int N,x,f;
    for(N=1;N<b;N++)
    {
        f=0;
        if(N>a)
        {
            for(x=2;x<N;x++)
            {
               if(N%x==0)
               f=1;
            }
            if(f==0 && N!=1)
            printf("%d\n",N);
        }
    }
}
int main()
{
    printf("Enter two numbers\n");
    scanf("%d\n%d",&a,&b);
    printf("The prime numbers between %d and %d\n",a,b);
    primenumbers(a,b);
    return 0;
}