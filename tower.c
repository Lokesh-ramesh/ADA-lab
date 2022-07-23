#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

void hanoi(int x,char from,char to,char aux)
{
    if(x==1)
    printf("\n move disk from %c to %c",from,to);
    else
    {
        hanoi(x-1,from,aux,to);
        printf("\n move disk from %c to %c",from,to);
        hanoi(x-1,aux,to,from);
    }
}
int main()
{
    int disks;int moves;
    printf("enter number of disks\n");
    scanf("%d",&disks);
    moves=pow(2,disks)-1;
    printf("the number of moves required is %d",moves);
    hanoi(disks,'a','b','c');
    return 0;
}
