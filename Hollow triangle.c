#include<stdio.h>
 int main()
 {
    int n, i, j ,sp;
    printf("Enter n:");
    scanf("%d", &n);
    for(i = 1; i<=n; i++)
    {
    for(sp=0;sp<=n-i;sp++)
    printf(" ");
    {
    for(j = 1; j<=(2*i-1); j++)
    {
    if(j==1||j==(2*i-1)||i==n)
    printf("*");
    else
    printf(" ");
    }
    printf("\n");
    }}
    return 0;
}
    
