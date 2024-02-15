#include <bits/stdc++.h>
using namespace std;

vector<int> printNos(int x) {
    if(x==0){
        return {};
    }
    vector<int>ans = printNos(x-1);
    ans.push_back(x);
    return ans;
}

int main(){
    cout<<printNos(5);
}