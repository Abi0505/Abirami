#include<stdio.h>
int main()
{
int n,i,j,sp;
printf("enter n:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
for(sp=0;sp<=i;sp++)
printf(" ");
{
for(j=1;j<=n-i;j++)
printf("* ");
{
printf("\n");
}
}
}
return 0;
}
