int Solution::solve(vector<int> &arr) {
    sort(arr.begin(), arr.end());
    return arr[0] + arr[arr.size()-1];
}
