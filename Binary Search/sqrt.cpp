int Solution::sqrt(int A) {
    if(A == 0) return 0;
    long long i=0, j=A, ans;
    long long k;
    while(i <= j){
        k = i+(j-i)/2;
        if(k*k == A) return k;
        else if(k*k > A) j = k-1;
        else{
            ans = k;
            i = k+1;
        }
    }
    return ans;
}
