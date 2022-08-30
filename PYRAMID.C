#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,row,temp;
clrscr();
print("enter the no of row of in pyramid of stars u wish to see");
scanf("d",&n);
temp=n;
for(row=1;row<=n;row++)
{
for(i=1;i<temp;i++);
{
Printf("");
}
temp--;
for(i=1;i<=2*row-1;i++)
{
printf("*");
}
print("\n");
}
getch();
}
