// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr,int left,int mid,int right){
    int n1=mid-left+1;
    int n2=right-mid;
    
    vector<int>arr1(n1);
    vector<int>arr2(n2);
    
    for(int i=0;i<n1;i++){
        arr1[i]=arr[i+left];
    }
    for(int j=0;j<n2;j++){
        arr2[j]=arr[j+mid+1];
    }
    
    int i=0;
    int j=0;
    int k=left;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            arr[k]=arr1[i];
            ++i;
        }
        else{
            arr[k]=arr2[j];
            ++j;
        }
        ++k;
    }
    
    while(i<n1){
        arr[k]=arr1[i];
        i++;
        k++;
    }
    
    while(j<n2){
        arr[k]=arr2[j];
        ++j;
        ++k;
    }
}

void mergeSort(vector<int>&arr,int left,int right){
    if(left>=right) return;
    
    int mid=(left+right)/2;
    mergeSort(arr,left,mid);
    mergeSort(arr,mid+1,right);
    merge(arr,left,mid,right);

}

int main() {
    vector<int>arr={5,4,3,2,1};
    mergeSort(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }

    return 0;
}