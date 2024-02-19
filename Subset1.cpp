#include <bits/stdc++.h>
using namespace std;

void summ(int i, int sum, vector<int> &ds, vector<int> &arr)
{
    int n = arr.size();
    if (i == n)
    {
        ds.push_back(sum);
        return;
    }

    summ(i + 1, sum + arr[i], ds, arr);
    summ(i + 1, sum, ds, ans);
}

vector<int> subsetsum(vector<int> &arr)
{
    vector<int> ds;
    summ(0, 0, ds, arr);
    sort(ds.begin(), ds.end());
    return ds;
}