#include<stdio.h>
int main()
{
    int a[80],i,n,b;
    printf("enter the number of values in the array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    b=max_array(a,n);
    printf("%d",b);

}
int max_array(int *a,int n)
{
    int min=0,max,i,end=0 ,start=0,beg;
    for(i=0;i<n;i++)
    {
        max=a[i]+max;
        if(min<=max)
        {
            min=max;
            start=beg;
            end=i;

        }
        if(max<0)
        {
            max=0;
            beg=i+1;
        }
    }
    for(i=start;i<=end;i++)
    {
        printf("%d",a[i]);
    }
    return min;
}
