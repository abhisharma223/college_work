#include<stdio.h>
#include<conio.h>
main()
{int x=-1,y=1,z,n,i;
printf("enter number of fibonacci series that you want to print");
scanf("%d",&n);

for(i=0;i<=n;i++)
{
    z=x+y;
    printf("%d",z);
    x=y;
    y=z;
}
getch();



}
