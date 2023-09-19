#include<stdio.h>
int main()
{
int n,i,j;
printf(" enter n:");
scanf("%d",&n);
n=n*2-1;
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(i==j||i+j==n+1)
printf("*");
else
printf(" ");
}
{
printf("\n");
}}
return 0;
}
