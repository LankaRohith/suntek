#include <stdio.h>
#include <stdlib.h>


void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int segregate(int arr[], int size)
{
    int j = 0, i;
    for (i = 0; i < size; i++) {
        if (arr[i] <= 0) {
            swap(&arr[i], &arr[j]);
            j++;
        }
    }

    return j;
}

int findMissingPositive(int arr[], int size)
{
    int i;

    for (i = 0; i < size; i++) {
        if (abs(arr[i]) - 1 < size && arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
    }


    for (i = 0; i < size; i++)
        if (arr[i] > 0)
            return i + 1;

    return size + 1;
}

int findMissing(int arr[], int size)
{
    int shift = segregate(arr, size);

    return findMissingPositive(arr + shift, size - shift);
}

int main()
{
    int arr[70],i,n;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the elements intlothe array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    int missing = findMissing(arr, n);
    printf("The smallest positive missing number is %d ", missing);
    getchar();
    return 0;
}
