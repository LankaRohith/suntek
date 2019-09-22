#include <stdio.h>
#include <stdlib.h>
int fib(int);
int main()
{ int n,i,j=0;
  printf("enter a no.");
  scanf("%d",&n);
  n=abs(n);
  for(i=0;i<=n;i++)
 {
  printf("%d\n",fib(j));
  j++;
}
 return 0;
}
int fib(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
        return(fib(n-1)+fib(n-2));
}
