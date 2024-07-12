// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

vector<int> searchh(int arr[],int index,int size,int target){
    vector<int>ans;
    if(index==size){
        return ans;
    }
    if(arr[index]==target){
        ans.push_back(index);
    }
    vector<int>ansfrombelow=searchh(arr,index+1,size,target);
    for(int i=0;i<ansfrombelow.size();i++){
        ans.push_back(ansfrombelow[i]);
    }
    return ans;
}

int main() {
    int arr[10]={1,2,3,4,4,6,7,8,9,10};
    vector<int>ans=searchh(arr,0,10,4);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}