#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,j,b;
scanf("%d",&b);
clrscr();
while(b!=0)
{
a[i++]=b%2;
b=b/2;
}
for(j=0;j>0;j--)
{
printf("the binary value is %d",a[j]);
}
getch();
}
