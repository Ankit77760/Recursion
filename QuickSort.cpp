#include <bits/stdc++.h>
using namespace std;

int partitionArray(int input[], int start, int end)
{
    int pivot = input[start];
    int i = start;
    int j = end;

    while (i < j)
    {
        while (input[i] <= pivot && i <= end)
        {
            i++;
        }
        while (input[j] > pivot && j >= start)
        {
            j--;
        }
        if (i < j)
        {
            swap(input[i], input[j]);
        }
    }
    swap(input[start], input[j]);
    return j;
}

void quickSort(int input[], int start, int end)
{
    if (start < end)
    {
        int partitionI = partitionArray(input, start, end);
        quickSort(input, start, partitionI - 1);
        quickSort(input, partitionI + 1, end);
    }
}

int main()
{
    int arr[5] = {1, 41, 12, 14, 13};
    quickSort(arr, 0, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}