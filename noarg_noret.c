#include<stdio.h>
int sum_odd(int n)
{
    if(n>0)
    {
        if(n%2!=0)
        return n+sum_odd(n-2);
        if(n%2==0)
        return (n-1)+sum_odd(n-3);
    }
    else
    {
return 0;
    }
}
int main()
{
    int n;
    printf("ener the n value:");
    scanf("%d",&n);
    printf("%d",sum_odd(n));
    return 0;
    }