int Solution::trailingZeroes(int A) {
    int count=0;
    for(int i=5; i<=A; i=i*5){
        count += A/i;
    }
    return count;
}
