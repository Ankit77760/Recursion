#include <bits/stdc++.h>
using namespace std;

void summ(int index, int target, vector<int> &arr, vector<vector<int>> ans, vector<int> ds)
{
    if (index == arr.size())
    {
        if (target == 0)
        {
            ans.push_back(ds);
        }
        return;
    }

    if (arr[index] <= target)
    {
        ds.push_back(arr[index]);
        summ(index, target - arr[index], arr, ans, ds);
        ds.pop_back();
    }

    summ(index + 1, target, arr, ans, ds);
}

vector<vector<int>> combination(vector<int> arr, int target)
{
    vector<vector<int>> ans;
    vector<int> ds;
    summ(0, target, arr, ans, ds);
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3};
    combination(arr, 5);
}