bool equal(int i,string s){
    int n=s.size();
    if(i>n/2){
        return true;
    }
    if(s[i]!=s[n-i-1]){
        return false;
    }
    return equal(i+1,s);
}

bool isPalindrome(string& str) {
    return equal(0, str);
    
}
