#include<stdio.h>
int main()
{
int n,i,j,sp,c;
printf(" enter n:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
for(sp=0;sp<=n-i;sp++)
printf(" ");
{
for(j=0;j<=i;j++)
{
if(i==0||j==0)
c=1;
else
c=c*(i-j+1)/j;
printf("%d ",c);
}
{
printf("\n");
}}}
return 0;
}
