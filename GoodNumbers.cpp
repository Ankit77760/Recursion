#include<bits/stdc++.h>
using namespace std;

bool isgood(int num,int digit){
    int digits=num%10;
    int sum=digits;

    if(digits==digit){
        return false;
    }
    num/=10;
    while(num){
        digits=nums%10;
        if(digits<=sum||digits==digit){
            return false;
        }
        else{
            sum+=digits;
            num/=10;
        }
    }
    return true;
}


vector<int>good(int a,int b,int digit){
    vector<int>ans;
    for(int i=a;i<=b;i++){
        if(isgood(i,digit)==true){
            ans.push_back(i);
        }
    }
    return ans;
}