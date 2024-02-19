#include <bits/stdc++.h>
using namespace std;

void subset(int index, vector<vector<int>> &ans, vector<int> &ds, vector<int> &arr)
{
    ans.push_back(ds);

    for (int i = index; i < arr.size(); i++)
    {
        if (i > index && arr[i] == arr[i - 1])
            continue;

        ds.push_back(arr[i]);
        subset(index + 1, ans, ds, arr);
        ds.pop_back();
    }
}

vector<vector<int>> generateSubset(vector<int> &arr)
{
    vector<vector<int>> ans;
    vector<int> ds;
    subset(0, ans, ds, arr);
}