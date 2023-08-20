int Solution::maxSubArray(const vector<int> &A) {
    int max = (int)1e9;
    max = max*-1;
    int sum = 0;
    for(int i=0; i<A.size(); i++){
        sum += A[i];
        if(max < sum) max = sum;
        if(sum < 0) sum = 0;
    }
    return max;
}
