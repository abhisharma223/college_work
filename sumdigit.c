
#include<stdio.h>
#include<conio.h>
void main()
{
    int x,c,sum=0;
    printf("enter a number");
    scanf("%d",&x);
    while(x)
    {
        c=x%10;
        sum=sum+c;
        x=x/10;
    }
    printf("the sum of digits is:%d",sum);
    getch();
}
