int Solution::singleNumber(const vector<int> &a) {
    int l = a.size();
    int ans=0;
    for(int i=0; i<l; i++){
        ans = a[i]^ans;
    }
    return ans;
}