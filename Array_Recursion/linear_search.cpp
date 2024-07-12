#include<bits/stdc++.h>
using namespace std;

int searchh(int arr[],int index,int target,int size){
    if(index==size){
        return -1;
    }
    if(arr[index]==target){
        return index;
    }
    searchh(arr,index+1,target,size);
}

vector<int> searchmultiple(int arr[],int index,int size,int target,vector<int>&ans){
    if(index==size){
        return ans;
    }
    if(arr[index]==target){
        ans.push_back(index);
    }
    return searchmultiple(arr,index+1,size,target,ans);
}

int main(){
    int arr[5]={1,2,3,4,5};
    cout<<searchh(arr,0,2,5);

    cout<<"multiple occurences";
    vector<int>ans;
    int arrr[9]={1,2,3,8,5,6,8,8,8};
    searchmultiple(arrr,0,9,8,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}