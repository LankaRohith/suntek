#include <stdio.h>
#include <stdlib.h>
int fib1(int n,int m[]);
int fib(int n)
{

    int i,m[n];
    for(int i=0;i<n;i++)
        m*=-1;
    m[0]=0;
    m[1]=1;
    return fib1(n,m);
}
int fib1(int n,int m[])
{

    if(m[n]!=-1)
        return m[n];
    elsereturn (fib1(n-2,m)+fib1(n-1,m));
}
int main()
{   int m;
    printf("enter m\n");
    scanf("%d",&m);
    printf("%d",fib(m));
    return 0;
}
