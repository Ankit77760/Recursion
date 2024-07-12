// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int binary(int arr[],int start,int end,int target){
    if(start>end){
        return -1; 
    }
    int mid=(start+end)/2;
    if(arr[mid]==target) return mid;
    if(arr[mid]>target){
        return binary(arr,start,mid-1,target);
    }
    else{
        return binary(arr,mid+1,end,target);
    }
}



int main() {
    // Write C++ code here
    int arr[9]={1,2,3,4,5,6,7,8,9};
    cout<<binary(arr,0,8,30);
    return 0;
}