#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int hcf(int x,int y);

int main()
{int x,y;
    printf("enter two numbers\n");
    scanf("%d %d",&x,&y);
    printf("gcd of numbers is %d",(hcf(x,y)));
    return 0;
}
int hcf(int x,int y)
{
    if(y!=0)
    
        return hcf(y,x%y);
        else
        return x;
    }
