#include<stdio.h>
int i,j;
void triangle1(int i,int j)
{
    int x=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<9;j++)
        {
            if((j==4-i)||(j==4+i))
            printf("1");
            else if (((j==5-i)||(j==3+i))&&(i!=0))
            printf(" ");
            else if (((j==6-i)||(j==2+i))&&((i!=1)&&(i!=0)))
            printf("%d",x);
            else if((j==7-i)||(j==1+i))
            printf(" ");
            else if((i==4)&&(j==4))
            printf("6");
            else
            printf(" ");
        }
        x++;
        printf("\n");
    }
}
int main()
{
    printf("The pascal's triangle is :-\n");
    triangle1(i,j);
    return 0;
}
