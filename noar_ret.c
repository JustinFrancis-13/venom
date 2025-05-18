#include<stdio.h>
int multiple(int i,int n);
int main()
{
    int i,n;
    printf("enter the n value:");
    scanf("%d %d",&n,&i);
    printf("%d*%d=%d\n",n,i,multiple(i,n));
    
}
int multiple(int i,int n)
{
    if(i>=0)
return (n*multiple(n,i+1));

}