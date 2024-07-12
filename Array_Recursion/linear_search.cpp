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

int main(){
    int arr[5]={1,2,3,4,5};
    cout<<searchh(arr,0,2,5);
}