// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void bubble (int arr[],int index,int ci,int ti){
    if(ci==ti-1){
        return;
    }
    if(index==ti-ci-1){
        bubble(arr,0,++ci,ti);
        return;
    }
    if(arr[index]>arr[index+1]){
        swap(arr[index],arr[index+1]);
    }
    bubble(arr,++index,ci,ti);
}

int main() {
    // Write C++ code here
    int arr[5]={5,4,3,2,1};
    bubble(arr,0,0,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}