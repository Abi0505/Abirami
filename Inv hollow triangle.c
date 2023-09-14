#include <stdio.h>
int main()
{
    int i,sp,j, n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(sp=1;sp<i;sp++)
        {
            printf(" ");
        }
        for(j=1;j<=(n*2-(2*i-1)); j++)
        { 
            if(i==1||j==1||j==(n*2-(2*i-1)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
return 0;
}
