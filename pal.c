#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,y,r,sum=0;
clrscr();
printf("enter the number");
scanf("%d",&n);
y=n;
while(n>0)
{
r=n%10;
sum=sum*10+r;
n=n/10;
}
if(sum==y)
printf("the number is a palindrome");
else
printf("the number is not palindrome");
getch();
}
