#include <stdio.h>
#include <stdlib.h>
long int fact(int n);
int main()
{
    int n;
    printf("enter a no.");
    scanf("%d",&n);
    printf("fact is --->%ld",fact(n));
    return 0;
}
long int fact(int n)
{
    if(n==0)
        return 1;
    else if(n<0)
    {
        printf("not possible");
        exit(0);
    }
    else
        return n*fact(n-1);

}


