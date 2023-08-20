<<<<<<< HEAD
int Solution::singleNumber(const vector<int> &a) {
    int l = a.size();
    int ans=0;
    for(int i=0; i<l; i++){
        ans = a[i]^ans;
    }
    return ans;
=======
int Solution::singleNumber(const vector<int> &a) {
    int l = a.size();
    int ans=0;
    for(int i=0; i<l; i++){
        ans = a[i]^ans;
    }
    return ans;
>>>>>>> 13c5de8cfb1461e5003fe768e660951192c08054
}