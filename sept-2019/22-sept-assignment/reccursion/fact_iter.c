#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    long int f=1;
    printf("enter a no.");
    scanf("%d",&n);
    if(n==0)
    {
        printf("%d",1);
        exit(0);
    }
    if(n<0)
    {
        printf("not possible");
        exit(0);
    }
    for(int i=2;i<=n;i++)
        f=f*i;
    printf("%ld",f);
    return 0;
}



