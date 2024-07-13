// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int minn(int arr[],int start,int end){
    int min=start;
    for(int i=start+1;i<=end;i++){
        if(arr[i]<arr[min]){
            min=i;
        }
    }
    return min;
}

void selection(int arr[],int index,int end){
    if(index==end){
        return;
    }
    int mineli=minn(arr,index,end);
    if(mineli != index){
        swap(arr[mineli],arr[index]);
    }
    selection(arr,index+1,end);
}

int main(){
    int arr[5]={5,4,3,2,1};
    selection(arr,0,4);
    for(int i=0;i<5;i++){ 
        cout<<arr[i];
    }
}