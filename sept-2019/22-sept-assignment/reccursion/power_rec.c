#include<stdio.h>
int pow(int x,int n);
int main()
{
    int x,n;
    printf("enter the number");
    scanf("%d",&x);
    printf("enter the power ");
    scanf("%d",&n);
    printf("%d",pow(x,n));
}
int pow(int x,int n)
{
    if(n==0)
    return 1;
    return x*pow(x,n-1);

}
