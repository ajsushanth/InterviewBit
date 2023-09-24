int Solution::search(const vector<int> &arr, int k) {
    int l=0, h=arr.size()-1;
    while(l <= h){
        int m = (l+h)/2;
        if(arr[m] == k) return m;
        else if(arr[l] <= arr[m]){
            if(arr[l] <= k && k <= arr[m]) h = m-1;
            else l = m+1;
        }
        else{
            if(arr[m] <= k && k < arr[l]) l = m+1;
            else h = m-1;
        }
    }
    return -1;
}
