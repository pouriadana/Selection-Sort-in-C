/*******************************
* working selection sort
* NO POINTER
* NO RECURSION
* April 3, 2023
* Pouria Dana
*******************************/
#include <stdio.h>
/*Length of array to be used to store integers*/
#define ARR_LEN 5

void selection_sort(int [], int );

int main()
{
    int arr[ARR_LEN] = {0};
    int i;

    printf("--> ");
    for (i = 0; i < ARR_LEN; i++)
    {
        scanf(" %d", &arr[i]);
    }

    selection_sort(arr, ARR_LEN);
    
    for (i = 0; i < ARR_LEN; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

void selection_sort(int a[], int n)
{
    int i, j, temp;
    for (; n > 1; n--)
    {
        j = 0;
        for (i = 1; i < n; i++)
        {
            if (a[i] > a[j])
                j = i;
        }
        temp = a[n-1];
        a[n-1] = a[j];
        a[j] = temp;
    }
}