#include<stdio.h>
int main()
{
    int a[2][2]={{1,2},{2,1}},i1,j1,i2,j2,k,l,result;
    printf("Enter dimensions:");
    scanf("%d %d",&i1,&j2);
    printf("Enter the dimensions:");
    scanf("%d %d",&i2,&j2);
    for(i1=0;i1<10;++i1)
    if(j2!=i1)
    {
        printf("Matrices ivalid");
        return 1;
    }
        for(j1=0;j1<10;++j1)
    printf("enter the elments of matrix1:");
    scanf("%d %d",&i1,&j1);
    
    }
    for(k=0;k<i1;++k)
    {
        for(l=0;k<j1;++l)
        printf("enter the elements of matrix2:");
        scanf("%d %d",&i2,&j2);
    }

    for(k=0;k<i2;++k)
    {
        for(l=0;l<j2;++l)
        printf("result:");
        scanf("&d",&result)
    }
return 0;
}