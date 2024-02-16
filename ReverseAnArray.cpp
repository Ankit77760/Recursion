#include<bits/stdc++.h>
using namespace std;

vector<int>reversearray(int l,int r,vector<int>&arr){
    if(l>=r){
        return{};
    }
    swap(arr[l],arr[r]);
    return reversearray(l+1,r-1,arr);
}

int main(){
    vector<int>arr={1,2,3,4,5};
    reversearray(0,arr.size()-1,arr);
    for(auto it:arr){
        cout<<it<<" ";
    }
}