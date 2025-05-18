#include<stdio.h>

int armstrng();

int main()

{

int armstrong, sum=0,temp,n; armstrong armstrng();

temp=n;

if(sum==temp)

else

printf("%d is an armstrong number", armstrong); printf("%d is not an armstrong number", armstrong); return 0;

}

int armstrng()

int res=0,sum=0,temp,n; scanf("%d",&n);

while(n>0)

{
res=n%10; sum=sum+(res res*res); n=n/10;
} return sum;