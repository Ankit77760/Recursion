#include<bits/stdc++.h>
void rec(int x, vector<int>& ans) {
    if(x == 0) {
        return;
    }
    ans.push_back(x);
    rec(x-1, ans);
}

vector<int> printNos(int x) {
    vector<int>ans;
    rec(x,ans);
    return ans;
}

int main(){
    printNos(5);
}