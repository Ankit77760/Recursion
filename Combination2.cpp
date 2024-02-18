#include <bits/stdc++.h>
using namespace std;

void summ(int index, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> ds)
{
    if (target == 0)
    {
        ans.push_back(ds);
        return;
    }

    for (int i = index; i < arr.size(); i++)
    {
        if (arr[index] > target)
            break;
        ds.push_back(arr[index]);
        summ(index + 1, target - arr[index], arr, ans, ds);
        ds.pop_back();
    }
}

vector<vector<int>> combination(vector<int> arr, int target)
{
    vector<vector<int>> ans;
    vector<int> ds;
    summ(0, target, arr, ans, ds);
    return ans;
}