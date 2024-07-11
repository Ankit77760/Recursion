#include <bits/stdc++.h>
using namespace std;

bool sorted(int arr[],int index,int size){
    if(index+1==size){
        return true;
    }
    if(arr[index+1]>=arr[index]){
        return sorted(arr,index+1,size);
    }
    return false;
}

int main() {
    // Write C++ code here
    int arr[5]={1,3,3,4,4};
    bool ans=sorted(arr,0,5);
    cout<<ans;
    
    return 0;
}