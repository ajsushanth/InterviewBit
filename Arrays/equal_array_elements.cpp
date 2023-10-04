int Solution::solve(vector<int> &arr, int k) {
    sort(arr.begin(), arr.end());
    int n = arr.size();
    for(int i=1; i<n; i++){
        if((arr[i]-arr[i-1])%k != 0) return 0;
    }
    if((arr[n-1]-arr[0]) > 2*k) return 0;
    return 1;
}
