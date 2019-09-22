#include <stdio.h>
#include<math.h>

int main()
{
   int n,Sum=0,sumSq=0,i;
   int A,B;
  int a[50];
	printf("enter the size");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    int sum=n*(n+1)/2;
    int sumsq=n*(n+1)*(2*n+1)/6;
      for(i=0;i<n;i++)
      {
          Sum+=a[i];
          sumSq = sumSq + (pow(a[i], 2));
      }

        B = (((sumSq - sumsq) / (Sum - sum)) + sum - Sum) / 2;
         A = Sum - sum + B;

      printf("%d%d",A,B);



    return 0;
}
