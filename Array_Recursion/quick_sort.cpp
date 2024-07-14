// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void sort(vector<int>&arr,int l,int h){
    if(l>=h) return;
    
    int s=l;
    int e=h;
    int mid=(s+e)/2;
    int pivot=arr[mid];
    
    while(s<=e){
        while(arr[s]<pivot){
            s++;
        }
        while(arr[e]>pivot){
            e--;
        }
        if(s<=e){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
    }
    sort(arr,l,e);
    sort(arr,s,h);
}

int main() {
    vector<int>arr={5,4,3,2,1};
    sort(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }

    return 0;
}