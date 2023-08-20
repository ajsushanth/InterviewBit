
int Solution::solve(int n) {
    long long ans=0;
    int num = n, d=0;
    while(n!=0){
        d++;
        n = n/10;
    }
    n = num;
    while(n!=0){
        ans += pow(n%10, d);
        n = n/10;
    }
    return(ans==num);
}
