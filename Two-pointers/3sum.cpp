int Solution::threeSumClosest(vector<int> &arr, int x) {
    sort(arr.begin(), arr.end());
    int i, j, k, sum=0, ans=1000000000;
    for(i=0; i<arr.size()-2; i++){
        j=i+1, k=arr.size()-1;
        while(j < k){
            sum = arr[i] + arr[j] + arr[k];
            if(sum == x) return sum;
            if(abs(x-sum) < abs(x-ans)) ans = sum;
            if(sum < x) j++;
            else k--;
        }
    }
    return ans;
}
//take ans = 1000000000; instead of INT_MAX to avoid overflowing condition
