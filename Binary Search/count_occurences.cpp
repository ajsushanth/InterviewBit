int lower_bound(vector<int> arr, int k){
    int l=0, h=arr.size()-1;
    int ans = -1;
    while(l <= h){
        int m = (l+h)/2;
        if(arr[m] == k){
            ans = m;
            h = m-1;
        }
        else if(arr[m] > k) h = m-1;
        else l = m+1;
    }
    return ans;
}

int upper_bound(vector<int> arr, int k){
    int l=0, h=arr.size()-1;
    int ans = -1;
    while(l <= h){
        int m = (l+h)/2;
        if(arr[m] == k){
            ans = m;
            l = m+1;
        }
        else if(arr[m] > k) h = m-1;
        else l = m+1;
    }
    return ans;
}

int Solution::findCount(const vector<int> &arr, int k) {
    int low = lower_bound(arr, k);
    int high = upper_bound(arr, k);
    if(low == -1) return 0;
    return high-low+1;
}
