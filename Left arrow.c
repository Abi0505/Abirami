#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,n;
printf("enter n:");
scanf("%d",&n);
for(i=1;i<=n*2-1;i++)
{
for(j=1;j<=n;j++)
{
if(i<=n+1-j||i>=n-1+j)
printf("*");
else
printf(" ");
}
printf("\n");
}
getch();
return 0;
}
    
