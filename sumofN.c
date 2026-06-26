#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum += i;
    }
    printf(" the sum of %d numbers is: %d",n,sum);
    return 0;
}