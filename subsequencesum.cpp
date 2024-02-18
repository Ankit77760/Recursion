#include <bits/stdc++.h>
using namespace std;

void subsequence(int i, vector<int> ds, int s, int sum, int arr[], int n)
{
    if (i == n)
    {
        if (sum == s)
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
        }
        return;
    }
    ds.push_back(arr[i]);
    s += arr[i];
    subsequence(i + 1, ds, s, sum, arr, n);
    s -= arr[i];
    ds.pop_back();
    subsequence(i + 1, ds, s, sum, arr, n);
}

int main()
{
    int arr[3] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    subsequence(0, ds, 0, sum, arr, n);
}