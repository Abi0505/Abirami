#include<stdio.h>
int main()
{
    int n,i,j,sp;
    printf("enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(sp=0;sp<=n-i;sp++)
        printf(" ");
        {
            for(j=1;j<=(i*2-1);j++)
            if(j==1||j==(2*i-1))
            printf("*");
            else
            printf(" ");
            {
            printf("\n");
            }}}
    for(i=(n*0+2);i<=n;i++)
            {
        for(sp=0;sp<=i-1;sp++)
            printf(" ");
            {
            for(j=1;j<=((n*2)-(i*2-1));j++)
            if(j==1||j==((n*2)-(2*i-1)))
            printf("*");
            else
            printf(" ");
            {
                printf("\n");
            }
        }
    }
    return 0;
}
