#include <bits/stdc++.h>
using namespace std;

void mergee(vector<int> &arr, int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;

    vector<int> l1(n1);
    vector<int> l2(n2);
    for (int i = 0; i < n1; i++)
    {
        l1[i] = arr[low + i];
    }
    for (int j = 0; j < n2; j++)
    {
        l2[j] = arr[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = low;
    while (i < n1 && j < n2)
    {
        if (l1[i] <= l2[j])
        {
            arr[k] = l1[i];
            i++;
        }
        else
        {
            arr[k] = l2[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = l1[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = l2[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int> &arr, int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        mergee(arr, l, mid, r);
    }
}

int main()
{
    vector<int> arr = {12, 32, 1, 54, 23, 65, 12};
    mergeSort(arr, 0, arr.size());
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}