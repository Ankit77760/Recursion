vector<int> generateFibonacciNumbers(int n) {
    vector<int>ans;
    if(n<=0){
        return ans;
    }
    if(n==1){
        ans.push_back(0);
        return ans;
    }
    if(n==2){
        ans.push_back(0);
        ans.push_back(1);
        return ans;
    }
    ans = generateFibonacciNumbers(n - 1);
    ans.push_back(ans[n-2] + ans[n-3]);
    return ans;
}

int fib(int n){
    if(n<=1){
        return n;
    }

    int last=fib(n-2);
    int slast=fib(n-2);
    return last+slast;
}