#include <bits/stdc++.h>
vector<string> printNTimes(int n) {
    if(n==0){
        return {};
    }

    vector<string>ans = printNTimes(n-1);
    ans.push_back("Coding Ninjas");
    return ans;
}

int main(){
    cout<<printNTimes(5);
}