
#include<bits/stdc++.h>
using namespace std;

string removea(string s,int index,string &ans,char c){
    if(s.size()==index){
        return ans;
    }
    if(s[index]!=c){
        ans+=s[index];
        return removea(s,index+1,ans,c);
    }
    else{
        return removea(s,index+1,ans,c);
    }
}
int main() {
    string ans="";
    string s="abacccccbab";
    removea(s,0,ans,'b');
    cout<<ans;
    return 0;
}