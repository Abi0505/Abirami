#include<stdio.h>
int main()
{
    int n,i,j,sp;
    printf("enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(sp=1;sp<=n-i;sp++)
        printf(" ");
        {
            for(j=1;j<=i;j++)
            printf("* ");
            {
                printf("\n");
            }
        }
    }
    return 0;
}
