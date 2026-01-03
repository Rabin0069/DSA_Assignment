/* Write a C program using function to count even numbers in an array. The function should take the
array and its size as parameters and return the count of even numbers. Use for loop and if condition
inside the function. If no even number exists, display a proper message in the main function */
#include <stdio.h>

int Ecount(int arr[], int n)
{
    int i, count = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            count++;
    }
    return count;
}

int main()
{
    int n, i, arr[100], Ecount;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    Ecount = Ecount(arr, n);

    if (Ecount > 0)
        printf("Number of even elements: %d\n", Ecount);
    else
        printf("No even numbers in the array.\n");

    return 0;
}
