#include <stdio.h>
void maxelement(int a[], int n)
{
    int m = a[0], max, index;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > m)
        {
            m = a[i];
            max = m;
        }
        else
        {
            max = m;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (a[j] == max)
        {
            index = j;
        }
    }
    printf("The max element  of index %d array is %d\n", index, max);
}
void minelement(int a[], int n)
{
    int m = a[0], min, index;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < m)
        {
            m = a[i];
            min = m;
        }
        else
        {
            min = m;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (a[j] == min)
        {
            index = j;
        }
    }
    printf("The min element  of index %d array is %d\n", index, min);
}
int main()
{
    int n;
    printf("Enter ther value of n : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf(" arr[%d] : \n", i);
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < n; j++)
    {
        printf(" the %d element of array is %d\n", j + 1, arr[j]);
    }
    maxelement(arr, n);
    minelement(arr, n);
    return 0;
}
