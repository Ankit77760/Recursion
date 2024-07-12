// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int searchh(int arr[],int start,int end,int target){
    if(start>end){
        return -1;
    }
    int mid=(start+end)/2;
    if(arr[mid]==target){
        return mid;
    }
    if(arr[mid]>=arr[start]){
        if(arr[mid]>target && target>=arr[start]){
            return searchh(arr,start,mid-1,target);
        }
        else{
            return searchh(arr,mid+1,end,target);
        }
    }
    else{
        if(arr[mid]<target && target<=arr[end]){
            return searchh(arr,mid+1,end,target);
        }
        else{
            return searchh(arr,start,mid-1,target);
        }
    }
}

int main() {
    int arr[10]={4,5,6,7,8,9,10,1,2,3};
    cout<<searchh(arr,0,9,3);
    return 0;
}