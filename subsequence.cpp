#include<bits/stdc++.h>
using namespace std;

void subsequence(int i,string s,string&f){
    if(i==s.length()){
        cout<<f<<" "<<endl;
        return ;
    }

    f=f+s[i];
    subsequence(i+1,s,f);
    f.pop_back();
    subsequence(i+1,s,f);
}

int main(){
    string s="abc";
    string f="";
    cout<<"All Subsequence of: "<<endl;
    subsequence(0,s,f);
}