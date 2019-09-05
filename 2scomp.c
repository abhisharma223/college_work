#include<stdio.h>
#include<conio.h>
#define size 8
void main()
{
    char binary[size+1],onescomp[size+1],twoscomp[size+1];
    int i,carry=1;
    printf("enter a binary number");
    gets(binary);
    for(i=0;i<=size;i++)
    {
        if(binary[i]=='0')
            onescomp[i]='1';
        else if(binary[i]=='1')
            onescomp[i]='0';

    }
    onescomp[size]='\0';
    printf("the 1s complement is%s",onescomp);
    for(i=size-1;i>=0;i--)
    {
        if(onescomp[i]=='1'&&carry==1)
            twoscomp[i]='0';
            else if(onescomp[i]=='0'&&carry==1)
                {twoscomp[i]='1';
            carry=0;}
       else
        twoscomp[i]=onescomp[i];


}
twoscomp[size]='\0';
printf("\ntwos comp is %s",twoscomp);
getch();}
