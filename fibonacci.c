#include<stdio.h>
#include<conio.h>
void main()
{
    int x=1,y=0,z,t,n,i;
    printf("enter the amount of number of which you want to print fiboncci series");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        z=x+y;
        if(i==n)
            printf("%d",z);
    t=x;
    x=y;
    y=t;
    y=x+y;

    }
    getch();

}
