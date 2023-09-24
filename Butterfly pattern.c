#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,n;
printf("enter n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=(n*2-1);j++)
{
if(j<=i||j>=n*2-i)
printf("*");
else
printf(" ");
}
printf("\n");
}
for(i=1;i<=n;i++)
{
for(j=1;j<=(n*2-1);j++)
{
if(j<=n+1-i||j>=n-1+i)
printf("*");
else
printf(" ");
}
printf("\n");
}
getch();
return 0;
}
    
