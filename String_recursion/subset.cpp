#include<bits/stdc++.h>
using namespace std;

void subset(vector<int>arr,vector<vector<int>>&ans,vector<int>temp,int index){
    if(index==arr.size()){
        ans.push_back(temp);
        return;
    }
    //temp.push_back(arr[index]);
    //subset(arr,ans,temp,index+1);
    //temp.pop_back();
    //subset(arr,ans,temp,index+1);
    subset(arr,ans,temp,index+1);
    temp.push_back(arr[index]);
    subset(arr,ans,temp,index+1);
}

void sub(string p,string up,vector<string>&tempp){
    if(up.empty()){
        tempp.push_back(p);
        return ;
    }
    char ch=up[0];
    sub(p+ch,up.substr(1),tempp);
    sub(p,up.substr(1),tempp);
}

vector<string> subb(string p,string up){
    vector<string>ans;
    if(up.empty()){
        ans.push_back(p);
        return ans;
    }
    char ch=up[0];
     vector<string> a = subb(p + ch, up.substr(1));
    vector<string> b = subb(p, up.substr(1));
    for(int i=0;i<a.size();i++){
        ans.push_back(a[i]);
    }
    for(int i=0;i<b.size();i++){
        ans.push_back(b[i]);
    }
    return ans;
}

void subsetAscii(string p,string up){
    if(up.empty()){
        cout<<p<<endl;
        return;
    }
    char ch=up[0];
    subsetAscii(p+ch,up.substr(1));
    subsetAscii(p+to_string(ch+0),up.substr(1));
    subsetAscii(p,up.substr(1));
}

int main() {
    vector<int>arr={3,5,9};
    vector<vector<int>>ans;
    vector<int>temp;
    subset(arr,ans,temp,0);
    for(auto el : ans){
        cout<<"{";
        for(auto num:el){
            cout<<num<<" ";
        }
        cout<<"}";
    }

    cout<<endl<<"string"<<endl;

    vector<string>tempp;
    string s="abc";
    sub("",s,tempp);
    for(int i=0;i<tempp.size();i++){
        cout<<tempp[i]<<" ";
    }

        cout<<endl<<"new"<<endl;
    vector<string>anss=subb("","abc");
    for(int i=0;i<ans.size();i++){
        cout<<anss[i]<<" ";
    }

    cout<<"ASCII";
    subsetAscii("","abc");
    
    return 0;
}