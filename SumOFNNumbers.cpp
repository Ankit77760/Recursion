#include<bits/stdc++.h>
using namespace std;

int summ(int i,int sum){
    if(i<1){
        return sum;
    }
    return summ(i-1,sum+i);
}

long long sumFirstN(long long n) {
    long long sum=0;
    return summ(n,sum);
}

int main(){
    
}