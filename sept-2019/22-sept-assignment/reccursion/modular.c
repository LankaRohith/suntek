#include<stdio.h>
int pow(int x,int n);
int mod(int b,int m);
int main()
{
    int x,n,m,b;
    printf("enter the number");
    scanf("%d",&x);
    printf("enter the power ");
    scanf("%d",&n);
    printf("enter the values of m");
    scanf("%d",&m);
    b=pow(x,n);
    printf("%d",mod(b,m));
    return 0;
}
int pow(int x,int n)
{
    if(n==0)
    return 1;
    return x*pow(x,n-1);
}
int mod(int b,int m)
{
    if((b-m)<0)
    return b;
    else
    return mod(b-m,m);
}
