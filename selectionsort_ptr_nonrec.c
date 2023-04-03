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
    int *i, *j, temp;
    for (; n > 1; n--)
    {
        /*a is un-modified and thus always point to the first element in the array*/
        j = a;
        for (i = a + 1; i < a + n; i++)
        {
            if (*i > *j)
                j = i;
        }
        temp = *(a + (n-1)); // a+n is pointer arithmetic and always points one memory
                             // location after the last array element
        *(a + (n-1)) = *j;
        *j = temp;
    }
}