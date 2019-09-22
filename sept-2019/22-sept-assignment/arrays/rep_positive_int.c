#include <stdio.h>

int main()
{
	int arr[100];
	int i,j,n;
	int index,element;
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{

		scanf("%d",&arr[i]);
	}
	index=-1;
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(arr[i]==arr[j])
			{
				element=arr[j];
				index=j;
				break;
			}
		}

		if(index != -1)
			break;
	}
	if(index!=-1)
		printf("%d repeated",element);
	else
		printf("There is no repeated element\n");

	return 0;
}
