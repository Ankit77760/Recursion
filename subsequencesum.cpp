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
            cout << endl;
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

// print only once
bool subsequencee(int i, vector<int> ds, int s, int sum, int arr[], int n)
{
    if (i == n)
    {
        // condition satisfied
        if (sum == s)
        {
            for (auto it : ds)
                cout << it << " ";
            cout << endl;
            return true;
        }
        // condition not satisfied
        return false;
    }
    ds.push_back(arr[i]);
    s += arr[i];
    if (subsequencee(i + 1, ds, s, sum, arr, n) == true)
    {
        return true;
    }
    s -= arr[i];
    ds.pop_back();
    if (subsequencee(i + 1, ds, s, sum, arr, n) == true)
    {
        return true;
    }
    return false;
}

int main()
{
    int arr[3] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    subsequencee(0, ds, 0, sum, arr, n);
}